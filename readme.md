# .cpp to .txt
This program provides a way to save a copy of a single .cpp file as a .txt class. Made to be used specifically for Professor Caleb Fowler's CISP 400 course assignment submission formats.

## Disclaimer
This program only works to turn a single .cpp file into a .txt file. Any associated header files will not be copied over and `txt.cpp` will have to be modified to convert .h files into .txt files.

## FAQs
* What is a `Makefile`? Why should I know what they are?
   * When you have multiple C++ files you want to "link together" when you compile, normally you'd have to type in an egregious amount of commands to do so and you have to memorize a very specific command to compile. Makefiles help you automate these commands so that you can easily recompile your code using one simple command: `make`.
    * Extra resources:
      * https://makefiletutorial.com/
    * `Makefiles` are often used in industry and C++ programming. Not everything will be in the same .cpp file.
    
* Why did you make this?
   * I develop on my computer. I got a bit lazy having to copy my .cpp file, save it in another directory, rename it to a .txt, then put it back into my assignment directory for CISP 400. Only to do this again later when I modified something on the program.
    * Since I already use `Makefiles` to compile my code, I wanted a way to speed things up and save myself a little monotony, as well as a little exercise to learn how to run commands in a non-compiler context using a `Makefile`.


## Recommended Prerequisites
* g++ compiler (the compiler the Makefile template uses, feel free to modify the template)
* Ability to run `make`

## Intended Usage With Makefile
1. Obtain a local copy of this repository, or the `txt.cpp` file at least
    1. Compile the `txt.cpp` program if you don't have the `txt.exe` and the `txt.o`
2. In the `MakefileTEMPLATE`, Modify the `"PATH_NAME_HERE"`. `"PATH_NAME_HERE"` should be replaced with the path to your `txt.exe`. Keep the quotes.
3. Copy the `MakefileTEMPLATE` file and put it into your new project directory containing the .cpp file you want to convert into a .txt
4. For each project, modify the `PROGRAMNAME` to be the name of the .cpp file **without the .cpp extension** you want to turn into a .txt and rename `MakefileTEMPLATE` to `Makefile`
    * Example: If I wanted to convert `coolprogram.cpp` into a txt file, the `Makefile` should read: `PROGRAMNAME = coolprogram`
5. Done!

Now, whenever you `make`, using `copy`, it should turn your .cpp file into a .txt file in the same directory together!

## Non Makefile Usage (no `make`)
Not recommended. It would be faster to copy, paste, and change the extension.
1. Obtain a local copy of this repository, or the `txt.cpp` file at least
2. Compile the `txt.cpp` program if you don't have the `txt.exe` and the `txt.o`
3. Obtain the path to `txt.exe`.
4. `cd` to your project directory and paste the path and the .cpp file name **without the .cpp extension**
    * Example: `"C:\Users\Dylan Vu\CLionProjects\cisp400\cpptotxt\txt.exe" main` to turn `main.cpp` into a txt file
    * Repeat each time you want to reconvert. `Makefiles` can do this automatically, though!
5. Done!    