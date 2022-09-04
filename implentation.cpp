#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "project.h"

//implement all Stack functions here
Stack::Stack() {
    maxSize = 10;
    stack = new std::string[maxSize];
    counter = 0;
}

//destructor 
Stack::~Stack() {
    delete[] stack;
}

//clear the stack by reseting the counter to 0
void Stack::clearStack() {
    counter = 0;
}

//check if the stack is empty
bool Stack::isEmpty() {
    return counter == 0;
}

//check if the stack is full
bool Stack::isFull() {
    return counter == maxSize;
}

//push new element to top of the stack if it is not full
void Stack::push(std::string element) {
    //check and resize when the stack is more than half way full
    if (size() / maxSize > threshold) {
        resize();
    }
    //even though it cannot be ever full, we still remain the code for possible error checking
    if (!isFull()) {
        stack[counter] = element;
        counter++;
    }
    else {
        std::cout << "Stack is full, cannot push anymore" << std::endl;
    }
}

//pop element out of the stack if it is not empty
std::string Stack::pop() {
    if (!isEmpty()) {
        counter--;
        std::string temp = stack[counter];
        stack[counter] = "";
        return temp;
    }
    else {
        std::cout << "The stack is empty, nothing to pop" << std::endl;
        return 0;
    }
}

/*
Provide a resize method to increase the size of the stack when it is half way full
For simplicity, increase its size by 2 each time it reaches the threshold
*/
void Stack::resize() {
    maxSize = maxSize * 2;
    std::string* temp = new std::string[maxSize];
    for (int i = 0; i < counter; i++) {
        temp[i] = stack[i];
    }
    delete[] stack;
    stack = temp;
}

void Stack::printStack(std::ofstream& outputFile) {
    outputFile << "Stack: ";
    for (int i = 0; i < counter; i++) {
        outputFile << stack[i] << " ";
    }
    outputFile << "\n";
}

int Stack::size() {
    return counter;
}