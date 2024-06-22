/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
class base{
public:
    virtual void show(){
        cout<<"This is Base class!!!\n";
    }
};

class derv1: public base{
public:
    void show(){
        cout<<"This is derv1 class!!!\n";
    }
};

class derv2: public base{
public:
    void show(){
        cout<<"This is derv2 class!!!\n";
    }
};
int main()
{
   derv1 d1;
   derv2 d2;
   base* ptr;
   ptr= &d1;
   ptr->show();
   ptr= &d2;
   ptr->show();
}
