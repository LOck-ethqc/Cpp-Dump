/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

void CON(int st[10], int top){
int ar[5];
int j=0;

for(int i=0; i<=top;i++)
if(st[i]%2==0 && st[i]>=0){
    ar[j]=st[i];
    j++;
}
for(int i=0; i<5;i++)
    cout<<ar[i]<<" ";
}
int main()
{
    int top=-1;
    int st[10];
    cout<<"Enter 10 numbers into the stack!";
    for(int i=0; i<10;i++){
        cin>>st[i];
        top++;
    }
    CON(st, top);
}
