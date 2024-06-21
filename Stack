/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

void CHOOSE(int *CH)
{
    cout<<"Input 1 to execute POP function.\n";
    cout<<"Input 2 to execute PUSH function.\n";
    cout<<"Input 3 to execute PRINT function.\n";
    cin>>*CH;
}
void PUSH(int ar[], int *top, int ind)
{
    int value;
    if(*top==ind-1)
        cout<<"The stack is full!\n";
    else{
        cout<<"Enter a number to add into the stack: ";
        cin>>value;
        ++*top;
        ar[*top]=value;
    }
}

void POP (int ar[], int *top)
{
    int value;
    if(*top==-1)
        cout<<"Stack is empty! Deletion is impossible with no data...\n";
    else{
        value=ar[*top];
        --*top;
    }
}

void PRINT(int ar[], int *top, int ind)
{
    for(int i=0; i<ind; i++)
        cout<<ar[i]<<" ";
    cout<<endl<<"Current Top is: "<<*top<<endl;
}

int main()
{
    int ind;
    cout<<"Enter how many numbers the stack will be able to carry? ";
    cin>>ind;
    int ar[ind];

    int fil;
    cout<<"How many numbers will you fill the stack with? ";
    cin>>fil;
    int top=fil-1;

    cout<<"Enter "<<fil<<" numbers to the array: ";
    for(int i=0; i<fil; i++)
    cin>>ar[i];

    int CH=0;
    int E;

    do
    {
    cout<<"Input 1 to execute POP function.\n";
    cout<<"Input 2 to execute PUSH function.\n";
    cout<<"Input 3 to execute PRINT function.\n";
    cin>>CH;
    //CHOOSE(&CH);
    switch(CH)
    {
    case (1): POP(ar, &top); cout<<endl; break;
    case (2): PUSH(ar, &top, ind); break;
    case (3): PRINT(ar, &top, ind); break;
    }
    cout<<"Do you want to execute once more? 1 to execute; 2 to exit: ";
    cin>>E;
    }
    while(E<2);

}
