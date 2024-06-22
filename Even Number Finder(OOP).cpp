/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class even{
private:
    int x1, x2, x3, x4;

public:
    void get(int num1, int num2, int num3, int num4)
    {
        x1=num1;
        x2=num2;
        x3=num3;
        x4=num4;
    }

    void Count()
    {
        int ar[4]={x1,x2,x3,x4};
        for(int i=0; i<4; i++)
            if(ar[i]%2 == 0)
                cout<<ar[i]<<endl;
    }

};
int main()
{
    int num1, num2, num3, num4;

    cout<<"Enter 4 numbers: ";
    cin>>num1>>num2>>num3>>num4;
    cout<<"- - - - -\n";

    even MULT;
    MULT.get(num1, num2, num3, num4);
    MULT.Count();
}
