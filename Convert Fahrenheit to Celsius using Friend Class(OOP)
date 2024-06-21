/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class Fahrenheit{
private:
    float F;
public:
    Fahrenheit(){
    cout<<"Enter Fahrenheit value: ";
    cin>>F;
    }
    friend class Celsius;
};
class Celsius{
public:
    float C;
    void convert(Fahrenheit F){
    C=(F.F-32)*5/9;
    cout<<"Celsius: "<<C;
    }
};
int main()
{
    Fahrenheit F;
    Celsius CS;
    CS.convert(F);
}
