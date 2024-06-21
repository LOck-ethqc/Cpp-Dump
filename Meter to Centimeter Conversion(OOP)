/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class meter{
private:
    float m;
    float c;

public:
    void read(float M)
    {
        m=M;
    }

    void convert()
    {
        c=m*100;
        cout<<c;
    }
};
int main()
{
    float M;

    cout<<"Enter a values in meters: ";
    cin>>M;

    meter ME;
    ME.read(M);
    ME.convert();
}
