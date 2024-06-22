/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class STD
{
private:
    int id;
    string name;
    int s1, s2;
    float avg;

public:
    STD(){
    id=9966;
    name="Kooky";
    s1=100;
    s2=50;
    avg=(s1+s2)/2;
    }

    STD(int ID, string NAME, int S1, int S2)
    {
        id=ID;
        name=NAME;
        s1=S1;
        s2=S2;
        avg=(s1+s2)/2;
    }
    ~STD(){
    cout<<"DESTRCUTOR INITIATED!"<<endl;
    }

    void display()
    {
        cout<<id<< " "<<name<< " "<<s1<<" "<<s2<<" "<<avg<<endl;
    }
};
int main()
{
    STD ST;
    STD STP(123, "Kooky2", 60, 50);

    ST.display();
    STP.display();
}
