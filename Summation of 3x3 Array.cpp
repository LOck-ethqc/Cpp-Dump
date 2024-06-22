/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
void SUM(int ar[3][3])
{
    int sum=0;
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
        if(i+j==2)
            sum+=ar[i][j];
    cout<<"sum: "<<sum<<endl;
}

void MULTI(int ar[3][3])
{
    float sum=1;
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
        if(ar[i][j]%2!=0)
            sum*=ar[i][j];
        cout<<"MULTIPLICATION: "<<sum<<endl;
}

void MAX(int ar[3][3])
{
    int MAX=ar[0][0];
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
        if(MAX<ar[i][j])
            MAX=ar[i][j];
    cout<<"Max: "<<MAX<<endl;
}

int main()
{
  int ar[3][3];
  cout<<"Enter numbers to the 3x3 array(9 numbers): ";
  for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
        cin>>ar[i][j];

   SUM(ar);
   MULTI(ar);
   MAX(ar);
}
