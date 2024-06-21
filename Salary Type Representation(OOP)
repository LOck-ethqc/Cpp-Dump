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
    int age;
    float salary;

public:
    void get_data(string NAME, int AGE, float SAL)
    {
        name = NAME;
        age = AGE;
        salary = SAL;

        if(salary<=1000 && salary>=800)
            cout<<name<<" "<<age<<" "<<"Salary type: A";
        else if(salary<=799 && salary>=600)
            cout<<name<<" "<<age<<" "<<"Salary type: B";
        else if(salary<=599 && salary>=400)
            cout<<name<<" "<<age<<" "<<"Salary type: C";
        else if(salary<=399 && salary>=200)
            cout<<name<<" "<<age<<" "<<"Salary type: D";
        else
            cout<<"Invalid Salary, Pick a range between 1000 and 200";
    }
};
int main()
{
    string NAME;
    int AGE;
    float SAL;

    cout<<"Enter the employee's name, age, and salary: ";
    cin>>NAME>>AGE>>SAL;

    employee EMP;
    EMP.get_data(NAME, AGE, SAL);
}
