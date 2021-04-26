### Working with Larger Programs

Reality is programs are not small and self contained as shown previously, but rather deep and complex and therefore involving multiple files and additional system tools to facilitate.

<u>**Dividing Your Program into Multiple Files**</u> - C allows for modular design, where a program can have many module parts. A module could be many functions, stored in a single file. When compiling modules refer to IDE you are using, below is gcc solution. <u>Key words</u> *module*

* <u>**Compiling Multiple Source Files from the Command Line**</u> - gcc for linux and cl for visual studio, command is run with the multiple files to be compiled. For example gcc mod1.c mod2.c mod3.c -o dbtest. Each source file genertes an object file. Time can be saved, by calling the object file instead of recompiling finished source files. This can be automated by IDEs or on linux with make files.

<u>**Communication Between Modules**</u> - Modules in seperate files need to communicate. If function a in file z calls function b in file x. It can happen the normal way as long as a prototype declaration is used. Each files is compiled independently, so no knowledge is available. <u>Key words</u> *Always include a prototype declaration, the compiler comples each module independently*

* <u>**External Variables**</u> - Extern variables are an extension of global variables. First declare (see ways) a variable in module a, then to use in module b use "extern dType varName". <u>Key words</u> *outside, defined, not, explicitly assiging and initial value.*

* <u>**Static Verses Extern Bariables and Functions**</u> - By default global variables are external, however this can be avoided by declaring a global variable to be static. This way it's scope is only the source file it resides in. This also applies to functions. <u>Key words</u> *not, but not from functions contained in other files, defined*

* <u>**Using Header Files Effectively**</u> - An include header files provides a means of standardisation. See chapters exmaple. Think packages in VHDL.

<u>**Other Utilities for Working with Larger Programs**</u> - These tools are not part of the C language. Therefore i'll just reference them. 1. make utility. 2. cvs (version control). 3. ar, grep, sed and so on.

<u>**Exercises**</u> - There are no Exercises for this chapter
