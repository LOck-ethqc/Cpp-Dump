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
}; typedef struct node* nodeptr;

int lidup[10];
int lp=0;

void linkcr(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter a initiating value to the Link: ";
cin>>p->info;
p->next=null;
plist=p;
}

void linkins(nodeptr &plist){
nodeptr p;
p=new node;
cout<<"Enter value: ";
cin>>p->info;
p->next=plist;
plist=p;
}

void linkprint(nodeptr &plist){
nodeptr q;
if(plist==null)
    cout<<"EMPTY!";
else
    q=plist;
    while(q->next!=0){
        cout<<q->info<<" ";
        lidup[lp]=q->info;
        lp++;
        q=q->next;
    }
cout<<q->info<<" "<<endl;
lidup[lp]=q->info;
}
int main()
{
    nodeptr plist;
    int ar[8];
    int top=-1;
    int i=0;
    linkcr(plist);
    while(i<9){
        linkins(plist);
        i++;
    }
    linkprint(plist);

   for(i=0;i<10;i++)
   if(lidup[i]%2==0){
        top++;
    ar[top]=lidup[i];
   }
   for(i=0;i<=top;i++)
    cout<<ar[i]<<" ";
}
