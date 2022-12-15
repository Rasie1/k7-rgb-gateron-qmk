# Keychron K7 RGB Gateron Swapable SN32F247BFG Sonix Firmware

My sonix qmk firmware config for this keyboard.

Based on: https://github.com/SonixQMK/qmk_firmware/pull/268/files

![Keychron K7](https://cdn.shopify.com/s/files/1/0059/0630/1017/products/Keychron-K7-65-percent-ultra-slim-compact-wireless-mechanical-keyboard-for-Mac-Windows-Hot-swappable-low-profile-Gateron-Mechanical-blue-switches-for-Mac-Windows-with-white-backlit_1800x1800.jpg?v=1638418328)


## How To Use

Use [SonixQMK](https://github.com/SonixQMK/qmk_firmware) to build it. Flash with [sonix flasher](https://github.com/SonixQMK/sonix-flasher)

In case if you brick it, you have to open it, deattach battery, put a wire between BOOT and P4 pins and connect it to your computer - then it will enter the bootloader.

## Issues

- Modifier keys have wrong coordinates for RGB, will fix soon

- Something is strange with RESET keys. Try pressing all modifer keys at once to enter the bootloader

- Bluetooth doesn't work (and isn't going to work)