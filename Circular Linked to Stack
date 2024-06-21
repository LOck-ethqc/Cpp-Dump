/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

int top=-1;
int ar[8];
int arr[10];
int j=0;

struct node{
int info;
struct node* next;
};typedef struct node* nodeptr;

void CL(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter initiative value: ";
cin>>p->info;
p->next=p;
plist=p;
}

void InsBeg(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter a value in the beginning: ";
cin>>p->info;
p->next=plist->next;
plist->next=p;
}

void InsEnd(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter a value at the end: ";
cin>>p->info;
p->next=plist->next;
plist->next=p;
plist=p;
}

void InsertMid(nodeptr &plist){
nodeptr p, a, b;
int L;

cout<<"Enter the location of the value You want to insert in: ";
cin>>L;

p=new node;
cout<<"Enter a value to insert at the middle: ";
cin>>p->info;

a=plist;
for(int i=1; i<L; i++)
    a=a->next;
b=a->next;
a->next=p;
p->next=b;
}

void Display(nodeptr &plist){
nodeptr p;
p=plist->next;
while(p!=plist){
    cout<<p->info<<" ";
    arr[j++]=p->info;
    p=p->next;
}
cout<<p->info<<endl<<"- - - - - - - - - - -\n";
arr[j++]=p->info;
}

void Conv(){
for(int i=0; i<10; i++)
    if(arr[i]%2==0)
        ar[++top]=arr[i];


for(int i=0; i<=top; i++)
    cout<<ar[i]<<endl;
}

int main()
{
    nodeptr plist;

    CL(plist); InsBeg(plist); InsEnd(plist); InsBeg(plist); InsBeg(plist); InsEnd(plist); InsBeg(plist); InsEnd(plist); InsBeg(plist); InsEnd(plist);  Display(plist);

    Conv();
}
