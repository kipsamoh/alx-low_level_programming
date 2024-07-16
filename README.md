A **low-level programming language** 

is a [programming language](https://en.wikipedia.org/wiki/Programming_language "Programming language") that provides little or no [abstraction](https://en.wikipedia.org/wiki/Abstraction_(computer_science) "Abstraction (computer science)") from a computer's [instruction set architecture](https://en.wikipedia.org/wiki/Instruction_set_architecture "Instruction set architecture"); commands or functions in the language are structurally similar to a processor's instructions. Generally, this refers to either [machine code](https://en.wikipedia.org/wiki/Machine_code "Machine code") or [assembly language](https://en.wikipedia.org/wiki/Assembly_language "Assembly language"). Because of the low (hence the word) abstraction between the language and machine language, low-level languages are sometimes described as being "close to the hardware". Programs written in low-level languages tend to be relatively [non-portable](https://en.wikipedia.org/wiki/Software_portability "Software portability"), due to being optimized for a certain type of system architecture.^[[1]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-:0-1)^^[[2]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-2)^^[[3]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-3)^^[[4]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-4)^

Low-level languages can convert to machine code without a [compiler](https://en.wikipedia.org/wiki/Compiler "Compiler") or [interpreter](https://en.wikipedia.org/wiki/Interpreter_(computing) "Interpreter (computing)")---[second-generation programming languages](https://en.wikipedia.org/wiki/Second-generation_programming_language "Second-generation programming language")^[[5]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-:3-5)^^[[6]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-:4-6)^ use a simpler processor called an [assembler](https://en.wikipedia.org/wiki/Assembly_language#Assembler "Assembly language")---and the resulting code runs directly on the processor. A program written in a low-level language can be made to run very quickly, with a small [memory footprint](https://en.wikipedia.org/wiki/Memory_footprint "Memory footprint"). An equivalent program in a [high-level language](https://en.wikipedia.org/wiki/High-level_language "High-level language") can be less efficient and use more memory. Low-level languages are simple, but considered difficult to use, due to numerous technical details that the programmer must remember. By comparison, a [high-level programming language](https://en.wikipedia.org/wiki/High-level_programming_language "High-level programming language") isolates execution semantics of a computer architecture from the specification of the program, which simplifies development.^[[1]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-:0-1)^

Machine code[[edit](https://en.wikipedia.org/w/index.php?title=Low-level_programming_language&action=edit&section=1 "Edit section: Machine code")]

--------------------------------------------------------------------------------------------------------------------------------------------------

[![](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8c/Digital_pdp8-e2.jpg/220px-Digital_pdp8-e2.jpg)](https://en.wikipedia.org/wiki/File:Digital_pdp8-e2.jpg)

Front panel of a PDP-8/E minicomputer. The row of switches at the bottom can be used to toggle in a machine language program.

Main article: [Machine code](https://en.wikipedia.org/wiki/Machine_code "Machine code")

*Machine code* is the form in which code that can be directly executed is stored on a computer. It consists of machine language [instructions](https://en.wikipedia.org/wiki/Instruction_set_architecture "Instruction set architecture"), stored in memory, that perform operations such as moving values in and out of memory locations, arithmetic and boolean logic, and testing values and, based on the test, either executing the next instruction in memory or executing an instruction at another location.

Machine code is usually stored in memory as [binary](https://en.wikipedia.org/wiki/Binary_code "Binary code") data. Programmers almost never write programs directly in machine code; instead, they write code in [assembly language](https://en.wikipedia.org/wiki/Assembly_language "Assembly language") or higher-level programming languages.^[[1]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-:0-1)^

Although few programs are written in machine languages, programmers often become adept at reading it through working with [core dumps](https://en.wikipedia.org/wiki/Core_dump "Core dump") or debugging from the front panel.

Example of a function in hexadecimal representation of [x86-64](https://en.wikipedia.org/wiki/X86-64 "X86-64") machine code to calculate the *n*th [Fibonacci number](https://en.wikipedia.org/wiki/Fibonacci_number "Fibonacci number"), with each line corresponding to one instruction:

89 f8

85 ff

74 26

83 ff 02

76 1c

89 f9

ba 01 00 00 00

be 01 00 00 00

8d 04 16

83 f9 02

74 0d

89 d6

ff c9

89 c2

eb f0

b8 01 00 00

c3

Assembly language[[edit](https://en.wikipedia.org/w/index.php?title=Low-level_programming_language&action=edit&section=2 "Edit section: Assembly language")]

------------------------------------------------------------------------------------------------------------------------------------------------------------

Main article: [Assembly language](https://en.wikipedia.org/wiki/Assembly_language "Assembly language")

Second-generation languages provide one abstraction level on top of the machine code. In the early days of coding on computers like [TX-0](https://en.wikipedia.org/wiki/TX-0 "TX-0") and [PDP-1](https://en.wikipedia.org/wiki/PDP-1 "PDP-1"), the first thing [MIT](https://en.wikipedia.org/wiki/MIT "MIT") [hackers](https://en.wikipedia.org/wiki/Hacker_culture "Hacker culture") did was to write assemblers.^[[7]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-:1-7)^ Assembly language has little [semantics](https://en.wikipedia.org/wiki/Semantics_(computer_science) "Semantics (computer science)") or formal specification, being only a mapping of human-readable symbols, including symbolic addresses, to [opcodes](https://en.wikipedia.org/wiki/Opcode "Opcode"), [addresses](https://en.wikipedia.org/wiki/Memory_address "Memory address"), numeric constants, [strings](https://en.wikipedia.org/wiki/String_(computer_science) "String (computer science)") and so on. Typically, one [machine instruction](https://en.wikipedia.org/wiki/Machine_instruction_(computing) "Machine instruction (computing)") is represented as one line of assembly code, commonly called mnemonics.^[[8]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-8)^ Assemblers produce [object files](https://en.wikipedia.org/wiki/Object_file "Object file") that can [link](https://en.wikipedia.org/wiki/Linker_(computing) "Linker (computing)") with other object files or be [loaded](https://en.wikipedia.org/wiki/Loader_(computing) "Loader (computing)") on their own.

Most assemblers provide [macros](https://en.wikipedia.org/wiki/Macro_(computer_science) "Macro (computer science)") to generate common sequences of instructions.

Example: The same [Fibonacci number](https://en.wikipedia.org/wiki/Fibonacci_number "Fibonacci number") calculator as above, but in x86-64 assembly language using [AT&T syntax](https://en.wikipedia.org/wiki/AT%26T_syntax "AT&T syntax"):

fib:

  movl  %edi,  %eax  ; put the argument into %eax

  testl  %edi,  %edi  ; is it zero?

  je  .return_from_fib  ; yes - return 0, which is already in %eax

  cmpl  $2,  %edi  ; is 2 greater than or equal to it?

  jbe  .return_1_from_fib  ; yes (i.e., it's 1 or 2) - return 1

  movl  %edi,  %ecx  ; no - put it in %ecx, for use as a counter

  movl  $1,  %edx  ; the previous number in the sequence, which starts out as 1

  movl  $1,  %esi  ; the number before that, which also starts out as 1

.fib_loop:

  leal  (%rsi,%rdx),  %eax  ; put the sum of the previous two numbers into %eax

  cmpl  $2,  %ecx  ; is the counter 2?

  je  .return_from_fib  ; yes - %eax contains the result

  movl  %edx,  %esi  ; make the previous number the number before the previous one

  decl  %ecx  ; decrement the counter

  movl  %eax,  %edx  ; make the current number the previous number

  jmp  .fib_loop  ; keep going

.return_1_from_fib:

  movl  $1,  %eax  ; set the return value to 1

.return_from_fib:

  ret  ; return

In this code example, the [registers](https://en.wikipedia.org/wiki/Processor_register "Processor register") of the x86-64 processor are named and manipulated directly. The function loads its 32-bit argument from `%edi` in accordance to the [System V application binary interface for x86-64](https://en.wikipedia.org/wiki/X86_calling_conventions#System_V_AMD64_ABI "X86 calling conventions") and performs its calculation by manipulating values in the `%eax`, `%ecx`, `%esi`, and `%edi` registers until it has finished and returns. Note that in this assembly language, there is no concept of returning a value. The result having been stored in the `%eax` register, again in accordance with System V application binary interface, the `ret` instruction simply removes the top 64-bit element on the [stack](https://en.wikipedia.org/wiki/Stack-based_memory_allocation "Stack-based memory allocation") and causes the next instruction to be fetched from that location (that instruction is usually the instruction immediately after the one that called this function), with the result of the function being stored in `%eax`. x86-64 assembly language imposes no standard for passing values to a function or returning values from a function (and in fact, has no concept of a function); those are defined by an [application binary interface](https://en.wikipedia.org/wiki/Application_binary_interface "Application binary interface"), such as the System V ABI for a particular instruction set.

Compare this with the same function in [C](https://en.wikipedia.org/wiki/C_(programming_language) "C (programming language)"):

unsigned  int  fib(unsigned  int  n)

{

  if  (!n)

  {

  return  0;

  }

  else  if  (n  <=  2)

  {

  return  1;

  }

  else

  {

  unsigned  int  f_nminus2,  f_nminus1,  f_n;

  for  (f_nminus2  =  f_nminus1  =  1,  f_n  =  0;  ;  --n)

  {

  f_n  =  f_nminus2  +  f_nminus1;

  if  (n  <=  2)

  {

  return  f_n;

  }

  f_nminus2  =  f_nminus1;

  }

  }

}

This code is similar in structure to the assembly language example but there are significant differences in terms of abstraction:

-   The input (parameter `n`) is an abstraction that does not specify any storage location on the hardware. In practice, the C compiler follows one of many possible [calling conventions](https://en.wikipedia.org/wiki/Calling_convention "Calling convention") to determine a storage location for the input.

-   The local variables `f_nminus2`, `f_nminus1`, and `f_n` are abstractions that do not specify any specific storage location on the hardware. The C compiler decides how to actually store them for the target architecture.

-   The return function specifies the value to return, but does not dictate *how* it is returned. The C compiler for any specific architecture implements a **standard** mechanism for returning the value. Compilers for the x86 architecture typically (but not always) use the `%eax` register to return a value, as in the assembly language example (the author of the assembly language example has *chosen* to use the System V application binary interface for x86-64 convention but assembly language does not require this).

These abstractions make the C code compilable without modification on any architecture for which a C compiler has been written. The x86 assembly language code is specific to the x86-64 architecture and the System V application binary interface for that architecture.

Low-level programming in high-level languages[[edit](https://en.wikipedia.org/w/index.php?title=Low-level_programming_language&action=edit&section=3 "Edit section: Low-level programming in high-level languages")]

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

During the late 1960s and 1970s, [high-level languages](https://en.wikipedia.org/wiki/High-level_programming_language "High-level programming language") that included some degree of access to low-level programming functions, such as [PL/S](https://en.wikipedia.org/wiki/IBM_PL/S "IBM PL/S"), [BLISS](https://en.wikipedia.org/wiki/BLISS "BLISS"), [BCPL](https://en.wikipedia.org/wiki/BCPL "BCPL"), extended [ALGOL](https://en.wikipedia.org/wiki/ALGOL "ALGOL") and [ESPOL](https://en.wikipedia.org/wiki/Executive_Systems_Problem_Oriented_Language "Executive Systems Problem Oriented Language") (for [Burroughs large systems](https://en.wikipedia.org/wiki/Burroughs_large_systems "Burroughs large systems")), and [C](https://en.wikipedia.org/wiki/C_(programming_language) "C (programming language)"), were introduced. One method for this is [inline assembly](https://en.wikipedia.org/wiki/Inline_assembly "Inline assembly"), in which assembly code is embedded in a high-level language that supports this feature. Some of these languages also allow architecture-dependent [compiler optimization directives](https://en.wikipedia.org/wiki/Optimizing_compiler "Optimizing compiler") to adjust the way a compiler uses the target processor architecture.

Although a language like C is high-level, it does not fully abstract away the ability to manage memory like other languages.^[[9]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-9)^ In a high-level language like Python the programmer cannot directly access memory due to the abstractions between the interpreter and the machine. Thus C can allow more control by exposing memory management tools through tools like memory allocate (malloc).^[[10]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-10)^

Furthermore, as referenced above, the following block of C is from the GNU Compiler and shows the inline assembly ability of C. Per the GCC documentation this is a simple copy and addition code. This code displays the interaction between a generally high level language like C and its middle/low level counter part Assembly. Although this may not make C a natively low level language these facilities express the interactions in a more direct way.^[[11]](https://en.wikipedia.org/wiki/Low-level_programming_language#cite_note-11)^

int  src  =  1;

int  dst;

asm  ("mov %1, %0\n\t"

  "add $1, %0"

  :  "=r"  (dst)

  :  "r"  (src));

printf("%d\n",  dst);
