/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>
#include <math.h>
#include <float.h>
using namespace std;

//Convert ASCII -> Binary.
string ConvASCBin(int ascp){
    if(ascp==0)
        return "0";
    string Bin;
    while(ascp>0){
        Bin.insert(Bin.begin(),'0'+(ascp&1));
        ascp>>=1;
    }
    return Bin;
}

//XOR Encryption.
string XORenc(string ascpb){
string XORKey = "10110010";
string XORres = "";
for(int i=0;i<8;i++){
    if(XORKey[i]==ascpb[i])
        XORres+="0";
else
    XORres+="1";
}
return(XORres);
}

//Convert Binary -> ASCII
int ConvBinASC(string XORr){
int sum=0;
for(int i=0;i<8;i++){
    if(XORr[i] == '1')
    sum+=pow(2,8-1-i);
}
return sum;
}

int main()
{
    //User Text Input.
    cout<<endl<<"Please enter the word you want to encrypt:";
    char Plaintext[3]; //CHAR[] or we can use STRING.
    cin>>Plaintext;

    //Converting Plaintext -> ASCII
    cout<<endl<<"Converting Plaintext -> ASCII"<<endl;
    int ascp[3]; //array of the ASCII numbers of the Plaintext.
    int j=0;
    for(int i=0;i<3;i++){
       ascp[i]=int(Plaintext[j++]);
    }
    cout<<"Results: "<<endl;
    for(int i=0;i<3;i++){
        cout<<ascp[i]<<" ";
    }

    //Converting ASCII(Plaintext) -> Binary
    cout<<endl<<endl<<"Converting ASCII(Plaintext) -> Binary";
    string ascpb[3];
    for(int i=0;i<3;i++){
        ascpb[i]=ConvASCBin(ascp[i]);
    }
    cout<<endl<<"Results: "<<endl;
    for(int i=0;i<3;i++)
        cout<<ascpb[i]<<" ";

    //Calling XOR Encryption Function.
    cout<<endl<<endl<<"XOR Encryption Function: ";
    string XORresult[3];
    for(int i=0; i<3;i++){
        XORresult[i]=XORenc(ascpb[i]);
    }
    cout<<endl<<"First Encryption Results: "<<endl;
    for(int i=0;i<3;i++)
        cout<<XORresult[i]<<" ";

    //Converting Binary -> ASCII
    cout<<endl<<endl<<"Binary to ASCII Function: ";
    int cipherXOR[3];
    for(int i=0;i<3;i++)
        cipherXOR[i]=ConvBinASC(XORresult[i]);
    cout<<endl<<"Encryption Results(ASCII): "<<endl;
    for(int i=0;i<3;i++)
        cout<<cipherXOR[i]<<" ";

    //RSA Encryption Function.
    cout<<endl<<endl<<"RSA Encryption Function: ";
    int p=47, q=71, e=79;
    int n=p*q;
    long double Ciphertxt[3];
    for(int i=0;i<3;i++){
    Ciphertxt[i]=pow(cipherXOR[i],e);
    cout<<fmod(Ciphertxt[i],n)<<" ";
    }
}
