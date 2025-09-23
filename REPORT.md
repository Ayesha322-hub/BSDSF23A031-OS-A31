Report (Static Library Part)
1. Differences Between Makefile in Part 2 and Part 3

In Part 2 (normal build), the Makefile linked all the object files (.o) directly to create the program.

In Part 3 (static library build), new variables and rules were added:

The object files are first grouped into a static library (lib/libmyutils.a).

The program is then linked using this library instead of all the .o files.

This change shows the difference between directly linking object files vs. linking through a library.

2. Purpose of the ar Command

The ar command is used to create a static library. It takes multiple object files and bundles them into one .a file (like a container of compiled code).

The ranlib command is often run after ar to create an index inside the library. This makes it faster for the compiler to find the functions when linking.

3. Output of nm on client_static

When you run nm on client_static, you will see the symbols for functions like mystrlen, mystrcpy, etc.

This means that during static linking, the actual code of those functions is copied into the final executable.
So the program carries its own copy of the functions, making it larger in size but independent of external libraries.
