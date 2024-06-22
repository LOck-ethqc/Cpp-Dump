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
    power(){
    cout<<"Enter values into number and its power: ";
    cin>>M>>n;
    }
    friend class compute;
};
class compute{
public:
    void compute_pow(power P){
    cout<<pow(P.M, P.n);
    }
};
int main()
{
   power P;
   compute E;
   E.compute_pow(P);
}
