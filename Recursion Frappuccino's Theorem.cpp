/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
int i=0;
int j=1;
int k=2;
int Cap(int t){
int ar[t+2];
int help;
if(t==1)
    return 1;
else{
    return ar[k++]+ar[j++]*Cap(t-1);
}
}

int main()
{
    cout<<Cap(3);

}
