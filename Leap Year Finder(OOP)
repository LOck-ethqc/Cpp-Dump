/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
//THE "LEAP YEAR" IS A YEAR NUMBER THAT IS DIVISIBLE BY "4" BUT NOT DIVISIBLE BY "100"
class year{
private:
    int y;

public:
    void leap(int Y)
    {
        y=Y;

        if(y%4==0 && y%100!=0)
            cout<<y<<" is a leap year!";
        else
            cout<<y<<" is NOT a leap year!";
    }
};
int main()
{
    int Y;

    cout<<"Enter a year number: ";
    cin>>Y;

    year YR;
    YR.leap(Y);
}
