# MK-61 ecosystem

## What is it?

Tools and core libraries for MK-61 calculator emulation.

## Scheme

    +-------------------+
    |      Memory       |
    +-------------------+           +-------------------+
            |                       |     Keyboard      |
    +-------------------+           +-------------------+
    |     CPU           |                    |
    | +-------------+   |                    |
    | |    ALU      |   |                    V
    | +-------------+   |           +-------------------+
    | +-------------+   |     +-----| Input Controller  |
    | |  Registers  |   |     |     +-------------------+
    | +-------------+   |     |     
    | +-------------+   |     |     +-------------------+
    | |    Flags    |   |     |     |     Display       |
    | +-------------+   |     |     +-------------------+
    | +-------------+   |     |              ^
    | |     IP      |   |     |              |
    | +-------------+   |     |              |
    | +-------------+   |     V     +-------------------+
    | |   Stack     |---|-----+---->| Output Controller |
    | +-------------+   |           +-------------------+
    +-------------------+


## How to use it?

### Run tests

#### Windows

```powershell
cmake -S . -B build
cmake --build build --config Release
cd build
ctest -C Release
```

## How to contribute?

This section is under construction.
