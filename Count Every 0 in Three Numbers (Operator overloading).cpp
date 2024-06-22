/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>
#include <string.h>
#define null 0
using namespace std;

class numbers{
private:
    char x1[10], x2[10], x3[10];
    int Count=0;
public:
    void read(char a[], char b[], char c[]){
        strcpy(x1, a);
        strcpy(x2, b);
        strcpy(x3, c);
    }
    void operator ++(){
        char *off=strchr(x1, '0');
            while(off!=null){
                ++Count;
                off=strchr(off+1, '0');
        }
        off=strchr(x2, '0');
            while(off!=null){
                ++Count;
                off=strchr(off+1, '0');
        }
         off=strchr(x3, '0');
            while(off!=null){
                ++Count;
                off=strchr(off+1, '0');
        }
    }
    void write(){
    cout<<Count;
    }
};

int main()
{
  numbers n;
  n.read("100", "3780", "010");
  ++n;
  n.write();
}
