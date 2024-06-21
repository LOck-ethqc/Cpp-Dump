/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>

using namespace std;

struct node{
int info;
struct node *l, *r;
}; typedef struct node *nodeptr;

int no=0;
int leaf=0;
int val;
int ar[10], i=-1;
void create(nodeptr &t){
char ch;
if(t==0){
    t=new node;
    cin>>t->info;
    t->l=0;
    t->r=0;
}
cout<<"Do you want to add from left ("<<t->info<<") (Y/N): ";
cin>>ch;
if(ch=='y')
    create(t->l);

cout<<"Do you want to add from right ("<<t->info<<") (Y/N): ";
cin>>ch;
if(ch=='y')
    create(t->r);
}

void print(nodeptr &t){
if(t!=0){
    print(t->l);
    cout<<t->info<<" ";
    print(t->r);
}
}

int nonodes(nodeptr &t){
if(t!=0){
    no++;
    nonodes(t->l);
    nonodes(t->r);
}
return(no);
}

int noleaves(nodeptr &t){
if(t!=0){
    if(t->l==0 && t->r==0)
        leaf++;
    noleaves(t->l);
    noleaves(t->r);
}
return(leaf);
}

int RightVal(nodeptr &t){
if(t!=0){
    val+=t->info;
    RightVal(t->r);
    RightVal(t->l);
}
return (val);
}

void convert(nodeptr &t){
if(t!=0){
    if(t->info>0)
        ar[++i]=t->info;
    convert(t->l);
    convert(t->r);
        }
}

void MAX(nodeptr &t, int &maxx){
if(t!=0){
    if(maxx<t->info)
        maxx=t->info;
    MAX(t->l,maxx);
    MAX(t->r,maxx);
}
}

void sum(nodeptr &t, int &summ){
if(t!=0){
    if(t->info%2==0)
        summ+=t->info;
    sum(t->l, summ);
    sum(t->r, summ);

}
}

void maxl(nodeptr &t, int &maxleaf){
if(t!=0){
    if(t->l==0 && t->r==0)
        if(maxleaf<t->info)
            maxleaf=t->info;
    maxl(t->l, maxleaf);
    maxl(t->r, maxleaf);
}
}

int main()
{
    nodeptr t;
    t=0;
    cout<<"Enter Numbers to the Binary Tree!\n";
    create(t);
    print(t);
    //
    int n=nonodes(t);
    cout<<endl<<"Number of nodes: "<<n;
    //
    int lf=noleaves(t);
    cout<<endl<<"Number of leaves: "<<lf;
    //
    int vl=RightVal(t->r);//by choosing "(t->r)" you're just applying the search for the right side; you can use apply it for the left as well "(t->l)".
    cout<<endl<<"Value of the right side of the tree: "<<vl;
    //
    cout<<endl<<"Positive numbers: ";
    convert(t);
    for(int j=0; j<=i; j++)
    cout<<ar[j]<<" ";
    //
    int maxx=t->info; MAX(t, maxx);
    cout<<endl<<"Largest(max) number in the tree: "<<maxx;
    //
    int summ; sum(t, summ);
    cout<<endl<<"The sum of the positive numbers: "<<summ;
    //
    int maxleaf=0; maxl(t, maxleaf);//in "int maxleaf=0" you mustn't declare 0, you must make a function that reads the leaves and give one of them the value of it to the 'maxleaf'.
    cout<<endl<<"The largest leaf: "<<maxleaf;
}
