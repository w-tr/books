## Intro

Author basically says don't expect much, this is a quick bare essential guide. 

MY ADVICE use a cheat sheet available online. I'm skimming this, because I know the stuff already.

## Tool Flow

Step 1 - Coding in a text editor/ide

Step 2 - Simulation

Step 3 - Synthesis into logic representation (netlist)

Step 4 - Compile or place and route onto an FPGA

## In and Out

Module is the self contained unit or as name suggests "module".

Module consists of port lists, i/o declarations, signals and design implementation.

i/o signals define as wire & introduced concept of bus [x:z]

This section dealt with "combinatorial" logic

- Logical operations introduced 
```verilog
&&, ||, !=, >= // like c
```

- Bitwise operators 
```verilog
&, |, ~ // like C
```

- Replication operator
```verilog  
assign repMe = {4{a_sig}};
```

- Multiplexer function  assign 
```verilog 
assign bob = if_A ? a : if_B ? B : if_C ? C : default;
```

- Bus concatenation 
```verilog
assign a = { in_2[3:2], (in_1[3] & in_2[1]), blah};
```

## Clocks and Registers

Registers are clocked processes, therefore "sequential" & assignment is done differently. They are contained within always blocks

- Always block, run concurrently to each other.
```verilog
always @ (posedge clk)
  begin
    out_1 <= in_1;
  end
```
- Async controls, must be in (sensitivity list)
```verilog
always @ (posedge clk or posedge rst)
```
- Literal assignment
```verilog
a <= 1'b0; a <= 4'b1101; a <= 4'd13; a <= 4hD;
```

- Conditional operators - Are like C.
- if else is like c, but instead of {} use begin and end.

## State Machines

State machines provide clarity. Verilog allows the design of state machines by use of parameters (these are constants). There is no enumeration type like in VHDL.

```verilog
parameter idle = 2'b00;
```

The values of the state can be compared in a case statement.

```verilog
case (state_reg)
    idle:
        if (condition) state_reg <= new_state;
```

Boolean results of comparisons are equivariant to 1'b1 when true and 1'b0 when false.

```verilog
done <= (state_rege == finished);
```

## Modular Design

When a design grows in size, it's prudent to make the design consider of smaller modular parts. This enables reuse, clarity, simulation, and change benefits.

Therefore you have to instantiate the modules you wish to use.

```verilog
state_machine_1 go_delay_1
(
    .reset (reset), 
    .clock (clk),
    .go    (go_1),
    .kill  (kill_1),
    .done  (done_1)
);
```

Verilog allow combinatorial assignments on the port list. Only introduced into VHDL from 2008+.

```verilog
.go (go_2 | done_1)
```

Many modular parts can be acquired as IP CORES. Instantiating a module could be represented by hdl code (IP CORE) OR a "primitives" which exists within the FPGA fabric and the module instantiation is just a "black box" placeholder for the vendors synthesis tool.

Port lists can be filled out by order and no port name, or by name and associated signal.

## Memories

You can have memory in the FPGA or memory controllers for external devices. When dealing with internal memory, it can be 1. Inferred by verilog code, 2. Explicitly instantiated by vendors memory primitives, or 3. Vendor tools (wrappers around primitives).

An example of a verilog inferred memory is

```verilog
reg [7:0] mem_buf[0:127];
```

Comments can tell vendor tools attributes about inferred memory from verilog code

```verilog
// synthesis attribute ram_style of memory is distributed
```

Memory can have certain characteristics such as read-before-write or write-before-read, depth of this shall not be covered within here.

## Managing Clocks
























































### FML {#Test}

## Test



