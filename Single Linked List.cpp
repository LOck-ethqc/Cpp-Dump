/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>
#define null 0

using namespace std;

struct node{
int info;
struct node* next;
};
typedef struct node* nodeptr;

void CL(nodeptr &plist)
{
    nodeptr p, q;
    p=new node;
    cout<<"Enter a value into the List: ";
    cin>>p->info;
    p->next=null;
    plist=p;
}

void InsBeg(nodeptr &plist)
{
    nodeptr p;
    p=new node;
    cout<<"Insert a value: ";
    cin>>p->info;
    p->next=plist;
    plist=p;
}

void InsEd(nodeptr &plist)
{
    nodeptr p, q;
    q=plist;
    while (q->next!=0)
        q=q->next;
    p=new node;
    cout<<"Insert a value in the end: ";
    cin>>p->info;
    p->next=null;
    q->next=p;
}

void InsBet(nodeptr &plist)
{
    nodeptr p, a, b;
    int i,L;
    cout<<"Enter the location: ";
    cin>>L;
    p=new node;
    cout<<"Enter a value in between: ";
    cin>>p->info;
    a=plist;
    for(i=2;i<L;i++)
        a=a->next;
    b=a->next;
    a->next=p;
    p->next=b;
}

void DISPLAY(nodeptr &plist)
{
    nodeptr q;
    if(plist==null)
        cout<<"The List is empty!!";
    else
        q=plist;
    while(q->next!=0)
    {
        cout<<q->info<<" ";
        q=q->next;
    }
    cout<<q->info<<" ";
    cout<<endl;
}
int main()
{
    int CH;
    nodeptr plist;
    cout<<"Welcome to the List!"<<endl;
    CL(plist);
    cout<<"List have been created..."<<endl;
    do
    {
    cout<<"1-Insertion in the beginning.\n"<<"2-Insertion in the end.\n"<<"3-Insertion in between.\n"<<"4-Display.\n"<<"101-Exit.\n";
    cin>>CH;

    switch(CH)
    {
        case(1): cout<<"Insertion in the beginning is under process...\n"; InsBeg(plist); break;
        case (2): cout<<"Insertion in the end is under process...\n"; InsEd(plist); break;
        case (3): cout<<"Insertion in between is under process...\n"; InsBet(plist); break;
        case (4): cout<<"Display is under process...\n"; DISPLAY(plist); break;
        case (101): cout<<"Exiting program..."; break;
        default: cout<<"Really Nigga? Watcha doin' Nigga? Go get yo ass back there and choose another number; don't you dare come back here!\n"; break;
    }

    }
    while(CH!=101);
}
