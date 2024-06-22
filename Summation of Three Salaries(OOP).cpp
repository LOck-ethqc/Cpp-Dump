/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
int slr[3];
int s=0;

class Employee{
private:
    int ID, salary;
    string name, address;
public:
    Employee(){
        cout<<"Enter ID: ";
        cin>>ID;

        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter salary: ";
        cin>>salary;
        slr[s++]=salary;

        cout<<"Enter address: ";
        cin>>address;

        cout<<"- - - - - - - - - - - - - - -\n";
    }
friend void TotalSalaries(Employee E, Employee E2, Employee E3);
};

void TotalSalaries(Employee E, Employee E2, Employee E3){
int sum;
for(int i=0; i<3; i++)
    sum+=slr[i];

cout<<"Total summation: "<<sum;
}

int main()
{
    Employee E;
    Employee E2;
    Employee E3;

    TotalSalaries(E, E2, E3);
}
