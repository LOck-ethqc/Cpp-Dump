/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout<<"Welcome to Simple Static Calculator\n";
    cout<<"Choose two numbers to perform calculations: ";
    cin>>num1>>num2;

    cout<<"\nInstructions:\n";
    cout<<"To use the addition operation, please enter the character '+'.\n";
    cout<<"To use the subtraction, please enter the character '-'.\n";
    cout<<"To use the multiplication, please enter the character '*'\n";
    cout<<"To use the division, please enter the character '/'\n\n";

    cout<<"Choose the operation method you would like to use: ";
    cin>>op;

    switch(op)
{
    case '+': cout<<"The result of the operation is: "<<num1+num2; break;
    case '-': cout<<"The result of the operation is: "<<num1-num2; break;
    case '*': cout<<"The result of the operation is: "<<num1*num2; break;
    case '/': cout<<"The result of the operation is: "<<num1/num2; break;
    default: cout<<"ERRPR! We either couldn't find the operation you've requested, or the operation is not available in this current program. If neither, then you're not an earthling, go find another planet.";
}

    return 0;
}
