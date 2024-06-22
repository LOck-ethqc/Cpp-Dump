/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class Celsius{
private:
    float F;
public:
    Celsius(){
    cout<<"Enter the Fahrenheit degree: ";
    cin>>F;
    }
    friend convert(Celsius CS);
};
    convert(Celsius CS){
    float C;
    C=(CS.F-32)*5/9;
    cout<<"Celsius: "<<C;
}
int main()
{
   Celsius CS;
   convert(CS);
}
