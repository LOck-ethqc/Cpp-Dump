/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
class B;
class A{
private:
    int x;
public:
    A(int X){
        x=X;
    }
friend void MAX(A a, B b);
};

class B{
private:
    int y;
public:
    B(int Y){
        y=Y;
    }
friend void MAX(A a, B b);
};
void MAX(A a, B b){
if(a.x>b.y)
    cout<<a.x<<" 'X' Is MAX!";
else
    cout<<b.y<<" 'Y' Is MAX!";
}
int main()
{
    int aa, bb;
    cout<<"Enter A, B: ";
    cin>>aa>>bb;
    A a(aa);
    B b(bb);
    MAX(a, b);
}
