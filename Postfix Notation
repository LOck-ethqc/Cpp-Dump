/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class fix{
private:
    int pre,post;
public:
fix(){
pre=0;
post=1;
}
fix operator ++(){
++pre;
}
fix operator ++(int){
post++;
}
void print(){
cout<<"prefix val: "<<pre<<endl;
cout<<"Postfix val: "<<post<<endl<<"()()()()()()()()()()()"<<endl;
}
};

int main()
{
    fix f;
    f.print();
    f++;
    f.print();
    ++f;
    f.print();
}
