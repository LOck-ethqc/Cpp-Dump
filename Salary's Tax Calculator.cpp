/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

class Employee{
private:
    int ID;
    string NAME;
    float SALARY;
    float TAX;

public:
    Employee(int id, string name, float salary){
        ID=id;
        NAME=name;
        SALARY=salary;
        TAX=0.25*SALARY;
    }

    void PRINT(){
        cout<<ID<<" "<<NAME<<" "<<SALARY<<"\n"<<"Tax = "<<TAX;
    }

};

int main()
{
    int id;
    string name;
    string debit;
    float salary;

    cout<<"Enter ID, name, salary: ";
    cin>>id>>name>>salary;

    Employee EMP(id, name, salary);
    EMP.PRINT();


}
