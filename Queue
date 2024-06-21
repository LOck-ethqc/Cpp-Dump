/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;
int CHOICE(int ar[], int CH)
{
    cout<<"- - - -\n"<<"1-Insertion\n"<<"2-Deletion\n"<<"3-Print\n"<<"- - - -\n";
        cin>>CH;
    return(CH);
}

void INSERTION(int ar[], int *R, int *F, int noS)
{
    int ins;
    if(*R==noS-1)
        cout<<"The Queue is full! No insertion is acceptable.\n";
    else{
        cout<<"Insert a number into the Queue: ";
        cin>>ins;

        ++*R;

        ar[*R]=ins;
    }
    if(*F==-1)
        ++*F;
}

void DELETION(int ar[], int *R, int *F)
{
    int value;
    if(*F==-1)
        cout<<"Queue is empty! Nothing to delete.\n";
    else{
        value=ar[*F];

        ++*F;
    }
    if(*F==*R){
        value=ar[*F];
        *F=-1;
        *R=-1;
    }
}

void PRINT(int ar[], int *R, int *F)
{
    for(int i=*F; i<=*R; i++)
        cout<<ar[i]<<" ";
    cout<<endl;

}

int main()
{
    int noS;
    int innoS;
    int R=-1;
    int F=-1;
    int Q;
    int OP;

    cout<<"How many numbers will your Queue hold? ";
    cin>>noS;
    int ar[noS];

    cout<<"Do you want to insert numbers to the Queue? 1-yes/2-no: ";
    cin>>Q;
    if(Q==1){
    cout<<"How many numbers will you add now to the Queue? ";
    cin>>innoS;
    for(int i=0; i<innoS; i++)
        cin>>ar[i];
    F=0;
    R=innoS-1;
    }
    if(Q==2)
        cout<<"You will proceed with EMPTY Queue!\n";


    int CH;
    int opt;
    do
    {
       opt=CHOICE(ar, CH);

        switch(opt)
        {
            case (1): INSERTION(ar, &R, &F, noS); break;
            case (2): DELETION(ar, &R, &F); break;
            case (3): PRINT(ar, &R, &F); break;
        }

        cout<<"1-Continue\n"<<"2-Exit\n";
        cin>>OP;
    }
        while(OP!=2);
}
