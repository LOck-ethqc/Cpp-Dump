/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class studentt{
private:
    int ID, age;
    string name;
    float OOP, DS, Math;

public:
    void get(int id, int AGE, string NAME, float oop, float ds, float math)
    {
        ID=id;
        age=AGE;
        name=NAME;
        OOP=oop;
        DS=ds;
        Math=math;
    }

    void Average()
    {
        cout<<ID<<"."<<name<<"  "<<age<<endl;
        cout<<"Avg: "<<(OOP+DS+Math)/3;
    }

};
int main()
{
    int id, AGE;
    string NAME;
    float OOP, DS, math;

    cout<<"Enter the student's id, age, name: ";
    cin>>id>>AGE>>NAME;
    cout<<"Enter the marks of: OOP, DS, and Math: ";
    cin>>OOP>>DS>>math;

    studentt ST;
    ST.get(id, AGE, NAME, OOP, DS, math);
    ST.Average();
}
