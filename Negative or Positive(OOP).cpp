/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
class check{
private:
   int x;

public:
    void read(int X)
    {
        x=X;
    }

    void test()
    {
        if(x<0)
            cout<<x<<" is NEGATIVE!";
        else
            cout<<x<<" is POSITIVE!";
    }
};

int main()
{
    int X;
    cout<<"Enter a number to check if it's positive or negative: ";
    cin>>X;

    check NP;
    NP.read(X);
    NP.test();
    }
