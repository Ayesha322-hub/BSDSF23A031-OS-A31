1. Explain the linking rule in this part's Makefile: $(TARGET): $(OBJECTS). How does it differ from a Makefile rule that links against a library?

The rule $(TARGET): $(OBJECTS) means that the final program (the target) is made from the object files. The compiler takes all the object files and combines them into one executable.

The difference when using a library is that instead of directly combining all the object files, we just tell the compiler to link with the library (for example, -Llib -lmyutils). In that case, the program only pulls in the functions it actually needs from the library.

Q2. What is a git tag and why is it useful in a project? What is the difference between a simple tag and an annotated tag?

A git tag is like a label we put on a specific commit. It is mostly used to mark versions of a project, such as v1.0. Tags are helpful because they make it easy to go back to or download that exact version later.

A simple (lightweight) tag is just a name pointing to a commit, with no extra details. An annotated tag, on the other hand, also stores information like who made the tag, when, and a message about it. Annotated tags are more common when making official releases.

Q3. What is the purpose of creating a "Release" on GitHub? What is the significance of attaching binaries (like your client executable) to it?

A GitHub Release is a way to share an official version of the project with others. It is based on a git tag but also lets you write notes about what changed in that version.

Adding binaries (like the compiled .so library or the executable) is useful because other people don’t need to build the project themselves. They can just download and run the program right away. This also makes sure everyone is using the exact same version you tested.


