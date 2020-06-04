{ pkgs ? (import <nixpkgs> {})
, source ? ./.
, version ? "dev"
, stdenv ? pkgs.clangStdenv
}:

with pkgs;

stdenv.mkDerivation {
  name = "fixfilt-${version}";
  inherit version;
  src = lib.cleanSource source;

  preBuild = ''
    ninja clean
  '';

  nativeBuildInputs = [ 
    pkgs.ninja pkgs.clang_9 pkgs.gcc9 pkgs.ccache pkgs.meson ];
  buildInputs = [ pkgs.boost pkgs.abseil-cpp ];

  enableParallelBuilding = true;
}
