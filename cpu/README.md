# MK-61 CPU

## Interfaces

Each of the following interfaces is a separate module (dll) that can be implemented in a different way. In the CPU module, if the interface is not found, the default behavior will be used, causing either errors or incorrect operation.

### Input

The input interface is used to read the keyboard state.

### Output

The output interface is used to control the display.

### Stack

The stack is used to store numbers. Default stack size is 4 (**X**, **Y**, **Z**, **T**) plus (**X1**) to store the previous result. The **X** value is always visible on the display.

### Memory

The memory is used to store program code. It has a fixed size of 106 bytes in the default implementation.

### Instructions

See [MK-61 Instructions](instructions.md).

### Flags

It has a flag set up by an external switch for the argument of the trigonometric functions if it is in degrees, radians or gradians.

### Interrupts

Possible interrupts are:
1. External interrupt (keyboard)
1. Error interrupt (division by zero, etc.)

## Control Unit

The control unit is responsible for controlling the operation of the CPU. It is implemented as a finite state machine.

### Instruction Register

The instruction register is used to store the current instruction.

### Program Counter

The program counter is used to store the address of the next instruction.

### Instruction Decoder

The instruction decoder is used to decode the instruction.

### Data Register

The data register is used to store the data.

### Stack Pointer

The stack pointer is used to store the address of the top of the stack.

### Memory Address Register

The memory address register is used to store the address of the memory.

### Memory Data Register

The memory data register is used to store the data from the memory.

### Arithmetic Logic Unit

The arithmetic logic unit is used to perform arithmetic and logical operations.

### Flags Register

The flags register is used to store the flags.

### Interrupt Register

The interrupt register is used to store the interrupt.

## Undocumented Features

### Number Overflow

If the result of the operation is greater than 9.9999999e99, the error is thrown, although the actual result is calculated and could be implicitly used in further calculations.

### (Pseudo)Random Number Generator

Although the user manual describes which registers are could be used to randomize the sequence of the pseudo-random number generator, the actual algorithm is not described. The default implementation uses the `rand()` function from the C standard library.
