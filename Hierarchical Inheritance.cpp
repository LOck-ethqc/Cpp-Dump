/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;


class Decoration{
public:
    void print(){
        cout<<"name"<<" "<<"number"<<" "<<"title"<<" "<<"research"<<endl;
    }
};;
class employee{
protected:
    string name;
    int number;
public:
    employee(string n, int n2){
        name=n;
        number=n2;
    }
    void print(){
        cout<<name<<" "<<number<<" ";
    }
};

class manager: public employee{
protected:
    string title;
public:
    manager(string n, int n2, string t): employee(n, n2){
        title=t;
    }
    void print(){
        employee::print();
        cout<<title<<endl;
    }
};

class scientist: public manager{
private:
    string research;
public:
    scientist(string t, string n, int n2, string r): manager(n, n2, t){
        research=r;
    }
    void print(){
        manager::print();
        cout<<research<<endl;
    }
};

int main()
{
   Decoration d;
   d.print();
   manager m("Ali", 0544612600, "CEO");
   m.print();
   scientist s("Head Chief", "Moh", 0503433550, "EVALI");
   s.print();
}
