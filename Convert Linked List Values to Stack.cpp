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
};typedef struct node* nodeptr;

int ar[8];
int top=-1;

void CL(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter initiative value: ";
cin>>p->info;
p->next=null;
plist=p;
}

void InsBeg(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter node at the beginning: ";
cin>>p->info;
p->next=plist;
plist=p;
}

void InsEnd(nodeptr &plist){
nodeptr p,q;
q=plist;
p=new node;
cout<<"Enter value at the end: ";
cin>>p->info;
while(q->next!=null)
    q=q->next;
p->next=null;
q->next=p;
}

void InsMid(nodeptr &plist){
nodeptr p,b,a;
int L;
cout<<"Enter Location: ";
cin>>L;
b=plist;
for(int i=2; i<L; i++)
    b=b->next;
a=b->next;
p->next=a;
b->next=p;
}

void Display(nodeptr &plist){
nodeptr p;
p=plist;
while(p->next!=0){
    cout<<p->info<<" ";
    p=p->next;
}
cout<<p->info<<endl;
}

void Conv(nodeptr &plist){
nodeptr p;
p=plist;
while(p->next!=0){
    if(p->info%2==0)
        ar[++top]=p->info;
    p=p->next;
}
 if(p->info%2==0)
        ar[++top]=p->info;

for(int i=0; i<=top; i++)
    cout<<ar[i]<<endl;
}

int main()
{
    nodeptr plist;
    CL(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist); InsBeg(plist);
    Display(plist); Conv(plist);
}
