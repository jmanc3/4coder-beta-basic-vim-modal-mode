# 4coder-beta-basic-vim-modal-mode

This is the most basic implementation of modal editing in 4coder-beta

## Installation

Download or clone this repository and copy the jmanc3 folder to the custom folder which is inside the 4coder-beta directory. Then just build the 4coder-beta like you normally would; by calling the build script for your machine passing in our new default_bindings file.

```bash
C:\4coder>custom\bin\buildsuper_x64.bat custom\jmanc3\jmanc3_default_bindings.cpp
```

## Usage

To edit the bindings, modify the jmanc3_default_map.cpp file. You're going to have to modify it since I didn't re-implement vim for you, I just setup the structure so you can do that yourself.

## Advanced

The way I recommend you edit files in 4coder-beta is by copying the file you wish to modify into the jmanc3 folder and change the "4coder" part of the name to whatever you like. Then all you have to do is open jmanc3_default_include.cpp and include your file rather than the default 4coder one. This should make it extremely easy to upgrade to new versions of 4coder when they come out.

## Other

If you're interested in a more complete modal experience, I'm re-implementing kakoune in 4coder-beta [LINK HERE (WIP)] which is similar to vim but instead of verb object order, its object verb order which lets you visualize the modification before you do it.