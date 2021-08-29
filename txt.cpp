#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    //For writing text file from a .cpp file
    //Creating ofstream & ifstream class object

    // Process command line arguments
    // First argument is executable
    if (argc <= 1) {
        std::cout << "error: you don't have 1 argument to txt.cpp" << std::endl;
        return 1;
    }

    string cppFilename(argv[1]);

    ifstream input_file {cppFilename + ".cpp"};
    ofstream output_file {cppFilename + ".txt"};

    string line;

    if (input_file && output_file){

        while(getline(input_file,line)){
            output_file << line << "\n";
        }

        std::cout << "Text file generated \n";

    } else {
        //Something went wrong
        printf("Cannot read file");
    }

    //Closing file
    input_file.close();
    output_file.close();

    return 0;
}