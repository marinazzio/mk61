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

### Flags

### Interrupts

### Timing

## Control Unit

### Instruction Register

### Program Counter

### Instruction Decoder

### Address Register

### Data Register

### Stack Pointer

### Memory Address Register

### Memory Data Register

### Arithmetic Logic Unit

### Flags Register

### Interrupt Register

### Timer

## Undocumented Features

### Number Overflow

### (Pseudo)Random Number Generator

