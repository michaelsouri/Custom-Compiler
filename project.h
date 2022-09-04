#include <iostream>
#include <string>
#include <vector>
#include <utility>

//headers
void displayFile(std::string filename);
std::string formatFile(std::string fileString);
void handleKeyWord(std::string* file, std::string word);
void handleOtherWord(std::string* file, std::string otherWord);
void handleWord(std::string* file, std::string word);

void cleanupFile(std::string inputFileName, std::string outputFileName);

//blueprint class to create a stack
class Stack {
private:
    std::string* stack;
    int counter, maxSize;
    float threshold = 0.5;

    //operations on the stack
public:
    Stack();
    ~Stack();
    void clearStack();
    bool isEmpty();
    bool isFull();
    void push(std::string element);
    std::string pop();
    void resize();

    /*
    * Customized methods to check elements in the stack:
    - printStack(): print the stack with customized output lines
    - size(): inquire the size of the stack
    */

    void printStack(std::ofstream& outputFile);
    int size();
};

bool validateFile(std::string originalFile, std::string outputFile);
bool routine_0(std::string program, std::string originalFile);
void exceptionRoutine_1(int* currentIndex, std::pair<int, int> errPos, std::string originalFile);
void exceptionRoutine_2(std::pair<int, int> errPos, std::string originalFile, bool keywordMisspelled);
void exceptionRoutine_3(int* currentIndex, std::pair<int, int> errPos, std::string originalFile, bool keywordMisspelled);
void exceptionRoutine_4(int* currentIndex, std::pair<int, int> errPos, std::string originalFile, bool keywordMisspelled);
void exceptionRoutine_5(int* currentIndex, std::pair<int, int> errPos, std::string originalFile, bool keywordMisspelled);
void exceptionRoutine_6(int* currentIndex, std::pair<int, int> errPos, std::string originalFile, int lastTokenLength);
void exceptionRoutine_7(int* currentIndex, std::pair<int, int> errPos, std::string originalFile, bool keywordMisspelled);
void exceptionRoutine_8(int* currentIndex, std::pair<int, int> errPos, std::string originalFile, int lastTokenLength);
void exceptionRoutine_9(int* currentIndex, std::pair<int, int> errPos, std::string originalFile);
void exceptionRoutine_10(int* currentIndex, std::pair<int, int> errPos, std::string originalFile);
void exceptionRoutine_11(int* currentIndex, std::pair<int, int> errPos, std::string originalFile);
void exceptionRoutine_12(std::pair<int, int> errPos, std::string originalFile);

void codeGenerate(std::string abstractFileData);
std::string retrieveAbstractFile();
void codeGenerate(std::string abstractFileData);
