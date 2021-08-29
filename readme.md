# .cpp to .txt
This program provides a way to save a copy of a single .cpp file as a .txt class. Made to be used specifically for Professor Caleb Fowler's CISP 400 course assignment submission formats.

## Disclaimer
This program only works to turn a single .cpp file into a .txt file. Any associated header files will not be copied over using the `MakefileTEMPLATE` and `txt.cpp` will have to be modified to convert .h files into .txt files.

## FAQs
* What is a `Makefile`? Why should I know what they are?
    * When you have multiple C++ files you want to "link together" when you compile, normally you'd have to type in an egregious amount of commands to do so and you have to memorize a very specific command to compile. Makefiles help you automate these commands so that you can easily recompile your code using one simple command: `make`.
    * When you modify several files, it might be difficult to remember which ones you changed to recompile. `Makefiles` remember and recompile for you.
    * `Makefiles` are often used in industry and C++ programming, since you will likely be dealing with multiple interlinked files.
    * Extra Resources
      * Makefile guide: https://makefiletutorial.com/
      * Using g++: https://www.geeksforgeeks.org/compiling-with-g-plus-plus/
      * Another Makefile guide: https://www.softwaretestinghelp.com/cpp-makefile-tutorial/
* How do I set up `make`?
    * Windows: I use MinGW32, which came with a `mingw32-make` command (instead of `make`).
    * I haven't used Linux or Mac yet, but these may help:
      * Linux: https://askubuntu.com/questions/161104/how-do-i-install-make
      * Mac: https://stackoverflow.com/questions/10265742/how-to-install-make-and-gcc-on-a-mac
## Recommended Prerequisites
* g++ compiler (the compiler the Makefile template uses, feel free to modify the template depending on your compiler)
* Ability to run `make`

## Intended Usage With Makefile
1. Obtain a local copy of this repository, or the `txt.cpp` file at least
    1. Compile the `txt.cpp` program if you don't have the `txt.exe`
2. In the `MakefileTEMPLATE`, Modify the `"PATH_NAME_HERE"`. `"PATH_NAME_HERE"` should be replaced with the path to your `txt.exe`. Keep the quotes.
3. Copy the `MakefileTEMPLATE` file and put it into your new project directory containing the .cpp file you want to convert into a .txt
4. For each project, modify the `PROGRAMNAME` to be the name of the .cpp file **without the .cpp extension** you want to turn into a .txt and rename `MakefileTEMPLATE` to `Makefile`
    * Example: If I wanted to convert `coolprogram.cpp` into a txt file, the `Makefile` should read: `PROGRAMNAME = coolprogram`
5. Done!

Now, whenever you `make`, using `copy`, it should turn your .cpp file into a .txt file in the same directory together!

## Non Makefile Usage (no `make`)
Not recommended. It would be faster to copy, paste, and change the extension than to remember/type in the command.
1. Obtain a local copy of this repository, or the `txt.cpp` file at least.
2. Compile the `txt.cpp` program into `txt.exe` if you don't have the `txt.exe`.
3. Obtain the path to `txt.exe`.
4. Using your terminal, `cd` to your project directory and paste the path and the .cpp file name **without the .cpp extension**
    * Example: `"C:\Users\Dylan Vu\CLionProjects\cisp400\cpptotxt\txt.exe" main` to turn `main.cpp` into a txt file
    * Repeat this step each time you want to reconvert.
5. Done!    
