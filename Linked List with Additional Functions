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
    cout<<endl<<"- - - - - -\n";
}

void Large(nodeptr &plist){
nodeptr p;
int Max;
p=plist;
Max=p->info;
while(p->next!=null){
    if(p->info>Max)
        Max=p->info;
    p=p->next;
}
if(p->info>Max)
    Max=p->info;
cout<<Max<<endl<<"LARGEST - LARGEST - LARGEST - LARGEST\n";
}

void prime(nodeptr &plist){
nodeptr p;
p=plist;
int T, flag=0, Pri=0;
while(p->next!=null){
    T=p->info-1;
    for(int i=2; i<=T; i++){
        if(p->info%i==0){
            flag=1;
            break;
        }
        if(flag==0)
            ++Pri;
    }
    p=p->next;
}
T=p->info-1;
    for(int i=2; i<=T; i++){
        if(p->info%i==0){
            flag=1;
            break;
        }
        if(flag==0)
            ++Pri;
    }
cout<<Pri<<endl<<"PRIME - PRIME - PRIME - PRIME - PRIME\n";
}

void even(nodeptr &plist){
nodeptr p;
p=plist;
while(p->next!=null){
    if(p->info%2==0)
        cout<<p->info<<" \n";
    p=p->next;
}
if(p->info%2==0)
    cout<<p->info<<" \n";
cout<<"EVEN - EVEN - EVEN - EVEN - EVEN";
}

int main()
{
    nodeptr plist;
   CL(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); DISPLAY(plist);
   Large(plist); prime(plist); even(plist);
}
