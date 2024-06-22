/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //CREATING FILES AND INSERTING(output) TEXT.
    fstream myfile;
    myfile.open("test2", ios::out);
    myfile<<"Hi";
    myfile.close();
    //OR
    ofstream myfile2; //"ofstream" STANDS FOR "Output fstream".
    myfile2.open("test3");
    myfile2<<"Hi from here as well :)~";
    myfile2.close();

    //READING(input) FILES.
    ifstream myfile3; //"ifstream" STANDS FOR "Input fstream";
    myfile3.open("test"); //YOU MUST ENTER "RESOURCE FILE" TO BE ABLE TO READ FROM THE FILE.
    string x;
    myfile3>>x;
    cout<<"Input of file 'test' => "<<x;
    myfile3.close();

    //How to read a whole file.
    ifstream myfile4;
    myfile4.open("test");
    string ch;
        while(1){ //Infinite loop.
        myfile4>>ch;
        if(myfile4.eof()) // ".eof" end of file.
            break;
        cout<<ch<<endl;
        }

}
