/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class decrement{
private:
    int x;
public:
decrement(int a){
x=a;
}
decrement operator --(){
--x;
// You can write: 1) "return (x)" or 2) "return decrement**name of the class** (x)"
return decrement(x);
}
void print(){
cout<<x<<endl<<"**************"<<endl;
}
};

int main()
{
    decrement d1(5), d2(1000);
    d1.print();
    d2.print();
    d2= --d1;
    d2.print();
}
