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
    int m;
    int n;

public:
    void compute_power(int M, int N)
    {
        m=M;
        n=N;
       cout<<pow(m,n);
    }
};
int main()
{
   int M, N;

   cout<<"Enter the value and its power: ";
   cin>>M>>N;

   power P;
   P.compute_power(M, N);
}
