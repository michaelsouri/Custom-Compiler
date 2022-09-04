#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "project.h"

/*
    Everything expected to happen will happen here and perform with abstraction in other files
 */
 
 //declared and computed in part2.cpp file
extern int errorCount;
extern int warningCount;

int main() {
    /*
        Part 1: Display file with name [filename], clean up file,
        tokenize all tokens and output to [outputFileName]
    */
    std::string filename = "finalp1.txt";

    std::cout << "START COMPLING FILE: " << filename << std::endl;
    std::cout << "--------------------" << std::endl;
    //display input file
    std::cout << "Content of finalp1.txt: \n" << std::endl;
    displayFile(filename);

    //call function to clean up file based on rules and output to an output file
    std::string outputFileName = "finalp2.txt";
    cleanupFile(filename, outputFileName);

    /*
        Part 2: Validate the file [outputFileName] just written into and produce any error occurred
    */
    std::cout << "\n\n--------------------------------\n";

    bool fileIsValid = false;

    std::cout << "\n";
    std::string originalFile = filename;
    fileIsValid = validateFile(originalFile, outputFileName);
    std::cout << "\n";

    /*
        Part 3: generate C++ code from the output file if no error occurred
    */
    std::string abstractFile = retrieveAbstractFile();
    if (fileIsValid) {
        std::cout << "Generating C++ file \n";
        codeGenerate(abstractFile);
    }

    if (errorCount == 0) {
        std::cout << "Compilation done successfully with no error.\n";
        if (warningCount > 0) {
            std::cout << "Generated: " << warningCount << " warning(s).\n";
        }
    }
    else {
        std::cout << "Compilation done with " << errorCount << " error(s) and " << warningCount << " warning(s) \n";
    }

    return 0;
}
