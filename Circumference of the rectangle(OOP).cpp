/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class rectangle{
int length;
int width;

public:
    void compute(int len, int wid)
    {
        length=len;
        width=wid;
        cout<<(length+width)*2;
    }
};
int main()
{
    int len;
    int wid;

    cout<<"Enter the length and the width of a rectangle: ";
    cin>>len>>wid;

    rectangle REC;
    REC.compute(len, wid);
}
