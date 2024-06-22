/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class ps{
private:
    int x;
public:
ps(){
    x=2;
}
//void OR int OR constructor(name of the class) can be used
//double plus(++) is essential
//parameter "int" is also necessary
void operator ++(int){
    x++;
}
void print(){
    cout<<x<<endl<<"//////////"<<endl;
}
};

int main()
{
    ps p;
    p++;
    p.print();
}
