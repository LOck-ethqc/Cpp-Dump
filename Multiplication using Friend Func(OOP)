/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
class number{
private:
    int x, y;
public:
    number(){
    cout<<"Enter two numbers to multiply: ";
    cin>>x>>y;
    }
    friend mult(number N);
};
mult(number N){
cout<<N.x*N.y;
}
int main()
{
   number N;
   mult(N);
}
