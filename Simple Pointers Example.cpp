/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
void swap(int *a, int *b){
    int s;
    s=*a;
    *a=*b;
    *b=s;


}
int main()
{
   int x=1;
   int y=2;
   int as;
   cout<<"X Before swapping="<<x<<" Y before swapping="<<y<<endl;
   swap(&x,&y);

   cout<<"X After swap="<<x<<" Y after swap="<<y;


}
