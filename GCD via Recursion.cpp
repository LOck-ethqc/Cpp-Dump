/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

int GCD(int a, int b){
if(b!=0)
    return GCD(b, a%b);
else
    return a;

}

int main()
{
    cout<<GCD(3, 6)<<endl;
}
