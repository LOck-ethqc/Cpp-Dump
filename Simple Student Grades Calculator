/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
class STUDENT{
public:
    float id, s1, s2;
    string name;
    float avg;
  void read(float idd, float s11, float s22, string namee)
  {
      id = idd;
      s1 = s11;
      s2 = s22;
      name = namee;
      avg = (s11 + s22)/2;

  }
  void DISPLAY()
  {
      cout<<id<<"."<<name<<endl<<s1<<endl<<s2<<endl<<"Average is: "<<avg;
  }
    };

int main()
{
   STUDENT stud;
   float ID;
   float M1;
   float M2;
   string N;
   cout<<"Enter the student id: ";
   cin>>ID;
   cout<<"Enter the student mark 1:";
   cin>>M1;
   cout<<"Enter the student mark 2: ";
   cin>>M2;
   cout<<"enter student name: ";
   cin>>N;
        stud.read(ID, M1, M2, N);
        stud.DISPLAY();
}
