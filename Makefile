.PHONY: meson cmake compile test clean

BUILD_DIR=build

compile: $(BUILD_DIR)
	@ninja -C $(BUILD_DIR)

test: compile
	@ninja -C $(BUILD_DIR) test

$(BUILD_DIR):
	@mkdir -p $@

cmake: $(BUILD_DIR)
	@(cd build; cmake .. -G Ninja)

meson: $(BUILD_DIR)
	@meson $(BUILD_DIR)

clean:
	@ninja -C $(BUILD_DIR)
