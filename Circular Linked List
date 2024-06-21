/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>
#define null 0;
using namespace std;

struct node {
int info;
struct node* next;
};typedef struct node* nodeptr;

void create(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter value to create list: ";
cin>>p->info;
p->next=p;
plist=p;
}

void insertbeg(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter value in the beginning: ";
cin>>p->info;
p->next=plist->next;
plist->next=p;
}

void insertend(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter at end: ";
cin>>p->info;
p->next=plist->next;
plist->next=p;
plist=p;
}

void insertbetween(nodeptr &plist){
nodeptr p, a, b;
int L;
cout<<"Enter the location: ";
cin>>L;
p=new node;
cout<<"Enter value to in between: ";
cin>>p->info;
a=plist->next;
for(int i=2; i<L; i++)
    a=a->next;
b=a->next;
a->next=p;
p->next=b;
}

void deletebegin(nodeptr plist){
nodeptr p;
p=plist->next;
if(p==plist){
    free(p);
    plist=0;
}
else{
    plist->next=p->next;
    free(p);
}
}

void deleteend(nodeptr plist){
nodeptr p, q;
p=plist->next;
if(p==plist){
    free(p);
    plist=0;
}
else{
    while(p!=plist){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    free(p);
    plist=q;
}
}

void display(nodeptr plist){
nodeptr p;

p=plist->next;
while(p!=plist){
    cout<<p->info<<" ";
    p=p->next;
}
cout<<p->info;
}
int main()
{
   nodeptr plist;

   create(plist); insertbeg(plist); insertbeg(plist); insertbetween(plist); display(plist);
}
