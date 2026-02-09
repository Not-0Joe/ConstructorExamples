// ClassConstructorExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FirstClass.h"
#include "SecondClass.h"

int main()
{

    // figure out call order after reading more on delegation


    std::cout << "CREATING OBJECT EXAMPLECLASS 1\n";
    ClassExampleFirst firstExampleClass1{};
    std::cout << "\nCREATING OBJECT EXAMPLECLASS 2\n\n";
    ClassExampleFirst firstExampleClass2{ 1 };
    std::cout << "\nCREATING OBJECT EXAMPLECLASS 3\n";
    ClassExampleFirst firstExampleClass3{ 1,2 };


    ClassExampleSecond secondExampleClass1{};
    ClassExampleSecond secondExampleClass2{ 1 };
    ClassExampleSecond secondExampleClass3{ 1,2 };



    return 0;
}