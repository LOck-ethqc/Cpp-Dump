/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>
using namespace std;

class employee{
private:
    string name;
    int age, salary;
public:
employee(){
cout<<"Enter name and age: ";
cin>>name>>age;
cout<<"Enter salary: ";
cin>>salary;
}
friend void large(employee e[]);
};
void large(employee e[]){
if(e[0].age>e[1].age)
    cout<<e[0].age<<" is the oldest!";
else
    cout<<e[1].age<<" is the oldest!";
}

int main()
{
    employee e[2];
    large(e);
}
