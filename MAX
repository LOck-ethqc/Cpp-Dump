/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class Max{
private:
    float x, y, z;

public:
    void read(float X, float Y, float Z)
    {
        x=X;
        y=Y;
        z=Z;
    }

    void big()
    {
        float MAX;
        if(x>y && x>z)
           MAX = x;
        else if(y>x && y>z)
            MAX = y;
        else if(z>x && z>y)
            MAX = z;

        cout<<"Maximum: "<<MAX;
    }
};
int main()
{
    float X,Y,Z;

    cout<<"Enter three numbers: ";
    cin>>X>>Y>>Z;

    Max mx;
    mx.read(X, Y, Z);
    mx.big();
}
