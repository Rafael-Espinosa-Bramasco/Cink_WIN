# C Ink

Make your console apps behave better!

## Install

### How to compile it

First you need to download the repo. Once you have the repo, you need to run some commands in function of wich kind of library you want to use.

Also, you need GCC to compile it (i recommend 15.1.0 for 64 bits and MSYS2)

#### 1.- Dynamic Link Library (DLL)

- To create the object file:

        gcc -c src/Cink.c -o Cink.o -DBUILDDLL

    -c tells the GCC C compiler that we just want to compile the file but not compile it into an executable\
    -o to specify the output file name and extension\
    -DBUILDDLL to tell the preprocessor we want to declare/define the 'BUILDDLL' flag

- Once you have the object file, its time to create the Dinamic Library file .a (also known as Static Library File or File of Files (it depends on its use)):

        gcc -shared -o Cink.dll Cink.o  -Wl,--out-implib=Cink.a

At this point you should have the following files:
- Cink.o (object file)
- Cink.dll (dynamic link library file)
- Cink.a (library file)

plus the library header file (Cink.h) you have all you need to use the library

#### 2.- Static Library

The process to make a Cink static library is like the DLL process, but with some changes

- Create the object file

        gcc -c src/Cink.c -o Cink.o -DBUILDSTATIC
    
    -c tells the GCC C compiler that we just want to compile the file but not compile it into an executable\
    -o to specify the output file name and extension\
    -DBUILDDLL to tell the preprocessor we want to declare/define the 'BUILDSTATIC' flag

- Create the .a file

        ar rcs Cink.a Cink.o

At this point you should have the following files:
- Cink.o (object file)
- Cink.a (library file)

plus the library header file (Cink.h) you have all you need to use the library

#### 3.- Standalone Library (RAW uncompiled code)

This is the easiest way to use the library, you just need take the STDACink.h file and include it into your own code, thats it.

### How to download it

You can download this library in 3 different ways

#### 1.- Dynamic Link Library (DLL)

Go to releases select the last release and download the DLLFiles.zip, extract it and there you have the files

#### 2.- Static Library

Go to releases select the last release and download the StaticLibrary.zip, extract it and there you have the files

#### 3.- Standalone Library (RAW uncompiled code)

Go to releases select the last release and download the STDALib.zip, extract it and there you have the file

## How to use

The way you should use the library depends on its kind (DLL, Static Library, Standalone)

### Dynamic Link Library

Once you have the .o, .a, .h and .dll files, you need to:

1. Place the header file where your source code files can find them, for example:

        .../src/lib/Cink.h

    and now you can use

        #include "lib/Cink.h"

2. Place the object file (Cink.o) and library file (Cink.a) in a folder, i recommend the root project folder but you can decide otherwise

        ProjectFolder/...

Now you can use the library as you want

3. Compile the app

        gcc src/main.c -o appName.exe -L. -l:Cink.a
    
    -L tells the compiler that the object (.o) are in the specified path (-L. means the root path)\
    -l tells the compiler that the library file (.a) name is the specified (l:Cink.a means the file name is EXACTLY Cink.a)

4. Place the DLL file aside the executable file or in any folder available at the PATH

If the DLL is not available, there will be an error

### Static Library

1. Place the header file where your source code files can find them, for example:

        .../src/lib/Cink.h

    and now you can use

        #include "lib/Cink.h"

2. Place the object file (Cink.o) and library file (Cink.a) in a folder, i recommend the root project folder but you can decide otherwise

        ProjectFolder/...

Now you can use the library as you want

3. Compile the app

        gcc src/main.c -o appName.exe -L. -l:Cink.a
    
    -L tells the compiler that the object (.o) are in the specified path (-L. means the root path)\
    -l tells the compiler that the library file (.a) name is the specified (l:Cink.a means the file name is EXACTLY Cink.a)

This way you dont need to have a DLL file

### Standalone Library

1. Place the header file where your source code files can find them, for example:

        .../src/lib/STDACink.h

    and now you can use

        #include "lib/STDACink.h"

That's it

## Functions at the library

ANSI: if you see any function that start like 'ansi_someFunctionName', it means it is an ANSI escape code or ANSI operative system function

For example:

    ansi_cursorGOTOXY(int x, int y);