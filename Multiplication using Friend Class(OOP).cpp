/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class number1{
private:
    int x;
public:
    number1(){
    cout<<"Enter a value: ";
    cin>>x;
    }
    friend class number2;
};

class number2{
private:
    int y;
public:
    number2(){
    cout<<"Enter another value: ";
    cin>>y;
    }
    void compute_pow(number1 NMB){
    cout<<NMB.x*y;
    }
};
int main()
{
    number1 NMB;
    number2 NMB2;
    NMB2.compute_pow(NMB);
}
