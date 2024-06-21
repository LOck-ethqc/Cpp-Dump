/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

int CHOOSE()
{
    int sw;
    cout<<"- - - - -"<<endl;
    cout<<"1- Insertion"<<endl<<"2-Deletion"<<endl<<"3-Print"<<endl;
    cout<<"- - - - -"<<endl;
    cin>>sw;
    return(sw);
}

void INSERTION(int ar[], int &FRONT, int &REAR, int sz)
{
    int val;
    if(REAR==sz-1 && FRONT==0 || FRONT==REAR+1)
        cout<<"The CQ is full! No insertion is possible."<<endl;
   else if(REAR==sz-1 && FRONT>0){
        cout<<"Enter a value to insert into the CQ: ";
        cin>>val;
        REAR=0;
        ar[REAR]=val;
    }
    else{
        cout<<"Enter a value to insert into the CQ: ";
        cin>>val;
        REAR++;
        ar[REAR]=val;
    }

    if(FRONT==-1)
        FRONT=0;
}

void DELETION(int ar[], int &FRONT, int &REAR, int sz)
{
    int val;
    if(FRONT==-1)
        cout<<"The CQ is empty! No deletion required."<<endl;
    if(FRONT==REAR){
        val=ar[FRONT];
        FRONT=-1;
        REAR=-1;
    }
    if(FRONT==sz-1 && FRONT>REAR){
        val=ar[FRONT];
        FRONT=0;
    }
        else{
        val=ar[FRONT];
        FRONT++;
    }

}

void PRINT(int ar[], int &FRONT, int &REAR, int sz)
{
    if(REAR>=FRONT){
    for(int i=FRONT; i<=REAR; i++)
        cout<<ar[i]<<" ";
    }
    else{
        for(int i=FRONT; i<sz; i++)
            cout<<ar[i]<<" ";
        for(int i=0; i<=REAR;i++)
            cout<<ar[i]<<" ";
    }

}
int main()
{
    int FRONT=-1, REAR=-1;
    int ch;
    int sz;
    cout<<"Enter the size of the CQ: ";
    cin>>sz;
    int ar[sz];

    int ad;
    cout<<"Do you want to add numbers to the CQ? 1-Yes. 2-No: ";
    cin>>ad;

    int nad;
    if(ad==1){
        cout<<"Enter how many numbers you want to add: ";
        cin>>nad;
        FRONT=0, REAR=nad-1;
        for(int i=0; i<nad; i++)
            cin>>ar[i];
    }
    else
        cout<<"You will proceed with empty CQ!"<<endl;

    do
    {
    int sw=CHOOSE();
    switch(sw){
    case (1): cout<<"Insertion is in process..."<<endl; INSERTION(ar, FRONT, REAR, sz); break;
    case (2): cout<<"Deletion is in process..."<<endl; DELETION(ar, FRONT, REAR, sz); break;
    case (3): cout<<"Printing is in process..."<<endl; PRINT(ar, FRONT, REAR, sz); break;
    }

    cout<<endl<<"1-Continue"<<endl<<"2-Exit"<<endl;
    cin>>ch;
    }
    while(ch!=2);
}
