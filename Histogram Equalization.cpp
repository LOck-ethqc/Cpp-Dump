/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Histogram number of pixels.
    int histogram[51]={0,0,0,0,0,0,0,0,0,
                        1,1,1,1,1,1,1,1,
                        2,2,2,2,2,2,2,2,2,
                        3,3,
                        4,4,4,4,4,4,4,4,4,4,4,4,4,4,
                        5,
                        6,6,6,6,6,
                        7,7};
    int Nopix[8];
    int s=0;
    int q=0;
    for(int i=0; i<8; i++)
    for(int j=0; j<51; j++){
        if(histogram[j]==i)
            Nopix[i]=++s;
        if(j==50)
            s=0;
    }
    for(int i=0; i<8; i++)
        cout<<q++<<" = "<<Nopix[i]<<endl;
    q=0;

    cout<<"------------------------"<<endl;
    // Running sum of the histogram value.
     int tot=0;
    float RunsumH[8];
    for(int i=0; i<8; i++){
        tot+=Nopix[i];
        RunsumH[i]=tot;
    }
    for(int i=0; i<8; i++)
        cout<<RunsumH[i]<<" ";

    cout<<endl<<"------------------------"<<endl;
    // Normalize by dividing the total number of pixels.
    float NormalizeH[8];
    for(int i=0; i<8; i++){
        NormalizeH[i]=RunsumH[i]/RunsumH[7];
        cout<<NormalizeH[i]<<"  ";
    }

    cout<<endl<<"------------------------"<<endl;
    //Highest gray level.
    int mx=0;
    for(int i=0; i<51; i++)
        if(mx<histogram[i])
            mx=histogram[i];
    cout<<"Highest Gray-Level = "<<mx;

    cout<<endl<<"------------------------"<<endl;
    //Multiplicate by highest gray level, then round to the closest integer.
    float RM[8];
    for(int i=0; i<8; i++){
        RM[i]=NormalizeH[i]*mx;
        RM[i]=round(RM[i]);
        cout<<q++<<" = "<<RM[i]<<endl;
    }
    q=0;

    cout<<"------------------------"<<endl;
    // Mapping.
    int MapH[8];
    for(int i=0; i<8; i++){
            if(RM[i]==RM[i-1])
                MapH[i-1]=Nopix[i]+Nopix[i-1];
    else
       MapH[i]=Nopix[i];
    }
    for(int i=0; i<8; i++)
        cout<<MapH[i]<<" ";

    cout<<endl<<"------------------------"<<endl;
    // Stars Drawing.
    cout<<"Original Histogram Drawing..."<<endl;
    for(int i=0; i<8; i++){
            cout<<endl;
    for(int j=1; j<=Nopix[i]; j++)
        cout<<"*"<<" ";
    }
    cout<<endl;
    // Second Stars Drawing.
    cout<<endl<<"Equalized Histogram Drawing..."<<endl;
    for(int i=0; i<8; i++){
            if(MapH[i]>0)
            cout<<endl;
    for(int j=1; j<=MapH[i]; j++)
        cout<<"*"<<" ";
    }

}
