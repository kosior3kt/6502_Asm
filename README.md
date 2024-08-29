# Introduction
## What even is this project?

It is my take on a assebly language for my 6502-like CPU emulator.
As you may imagine it just takes a .aa file and compiles it into machine code that then is passes into
6502 emulator and execulted there


# Building
## Existing build script
That what I would suggest to use, it just build everything for you.

### available flags:
+ --alternative         - this one is used for building alternative solutions. It is used to get experimental results usually
+ --build               - this one is used for building (by default it only generate cmake stuff)
+ --test                - this one invokes tests
+ --verbose             - this one makes all the events in code beign printed to console
+ --output_dir=<name>   - this one takes argument (name of the folder) and build everything in this folder. By deafult it is set to "build" 

## using cmake directly
You can also use CMake directly and it should work just fine. If you want to use this option you probably know what you are doing
and need no help from me

# Dependencies
+ cmake 3.15+
+ perl  5       (only for build.pl script)
+ c++   20 
+ GTest         (no clue, I use newest)
+ 6502          (if you wish to test the results of you code(?))

# Usage & Workflow
+ write a .aa file
+ pipe it into a compiler 
+ the machinecode file is generate - you need to feed it into 6502 emulator somehow now

# MISC
this thing is still in beta. I will provide better documentation for it later. Maybe some casual examples

# Questions?
if so just ask me directly lol

