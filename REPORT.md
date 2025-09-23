Report(Dynamic Library)
1. What is Position-Independent Code (-fPIC) and why is it needed for shared libraries?

Position-Independent Code (PIC) means the code can run no matter where in memory it gets loaded.
Shared libraries need this because the operating system may load them at different memory addresses for different programs. Without -fPIC, the library would not work properly when shared.

2. Why is the file size different between static and dynamic clients?

The static client is bigger because it contains a full copy of all the library code inside the executable.
The dynamic client is smaller because it only has references to the library, and the actual code is kept in the .so file. That’s why static executables are larger than dynamic ones.

3. What is LD_LIBRARY_PATH and why was it needed?

LD_LIBRARY_PATH is an environment variable that tells the system where to look for shared libraries.
We had to set it because the system didn’t know where our custom libmyutils.so was stored.
This shows that the operating system’s dynamic loader is in charge of finding and loading the right libraries when a program runs.
