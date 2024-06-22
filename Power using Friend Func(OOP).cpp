/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>
#include <math.h>
using namespace std;

class power{
private:
    int M, n;
public:
    void Insert(){
    cout<<"Enter a number then its power: ";
    cin>>M>>n;
    }
    friend compute_pow(power P);
};
compute_pow(power P){
    cout<<pow(P.M, P.n);
}
int main()
{
    power P;
    P.Insert();
    compute_pow(P);
}
