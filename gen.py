#!/usr/bin/env python

import xml.etree.ElementTree as ET
import sys
import pprint
import os

class FieldDb(object):

    def __init__ (self, filename):
        self.filename = filename
        self.doc = ET.parse (filename)
        self.root = self.doc.getroot ()
        self

    def build (self):
        self.db = {}
        for fields in self.root.iter ('fields'):
            for field in fields.iter ('field'):
                tag = field.attrib ['number']
                self.db [tag] = {'name': field.attrib ['name']}
                for value in field.iter ('value'):
                    if not 'values' in self.db [tag]:
                        self.db[tag]['values']= []

                    self.db[tag]['values'].append ((value.attrib ['enum'], \
                            value.attrib ['description']))

    def dump (self):
        pp = pprint.PrettyPrinter ()
        pp.pprint (self.db)

    def get_ns (self):
        return os.path.splitext(os.path.split(self.filename)[-1])[0]

    def iter (self):
        for key, value in self.db.items():
            yield key, value

if __name__ == "__main__":

    if len(sys.argv) != 4:
        print("Need spec xml, version and output file base")
        sys.exit(1)

    fdb = FieldDb (sys.argv [1])
    fdb.build ()

    ver = sys.argv [2]

    output_dir = sys.argv [3]
    hpp = os.path.join(output_dir, "fix%s.hpp" % ver)
    cpp = os.path.join(output_dir, "fix%s.cpp" % ver)

    # Write header
    with open (hpp, 'w') as f:
        f.write ("#pragma once\n")
        f.write ("\n")
        f.write ("#include \"fix.hpp\"\n")
        f.write ("\n")
        f.write ("namespace %s {\n" % (fdb.get_ns()))
        f.write ("  fix::Schema load_schema ();\n")
        f.write ("}")

    with open (cpp, 'w') as f:
        f.write ("#include \"fix%s.hpp\"\n" % ver)
        f.write ("\n")
        f.write ("namespace %s {\n" % (fdb.get_ns()))
        f.write ("  fix::Schema load_schema ()\n")
        f.write ("  {\n")
        f.write ("    fix::Schema schema;\n")
        for key, value in fdb.iter ():
            f.write ("    schema [%s] = fix::FieldDef {%s, \"%s\"" % (key, key, value ['name']))
            if 'values' in value:
                f.write (", {\n      %s }" % (",\n      ".join(map(lambda x: "{\"%s\", \"%s\"}" % (x[0], \
                    x[1]), value['values']))))

            f.write ("    };\n")
        f.write ("    return schema;\n")
        f.write ("  }\n")
        f.write ("}\n")
