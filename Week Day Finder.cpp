/*
 * Copyright (c) 2024, LOckETHQC
 * All rights reserved.
 *
 * This file is part of LOck-ethqc Github Repository Cpp-Dump
 *
 */

#include <iostream>

using namespace std;

int main()
{
   int day;

    cout<<"Enter a number from 1 to 7 to show you the name of the day of the number you've chosen: ";
    cin>>day;

    switch(day)
{

        case 1: cout<<"("<<day<<") The number you've chosen is the first day of the week--Sunday"; break;
        case 2: cout<<day<<" The number you've chosen is the second day of the week--Monday"; break;
        case 3: cout<<day<<" The number you've chosen is the third day of the week--Tuesday"; break;
        case 4: cout<<day<<" The number you've chosen is the fourth day of the week--Wednesday"; break;
        case 5: cout<<day<<" The number you've chosen is the fifth day of the week--Thursday"; break;
        case 6: cout<<day<<" The number you've chosen is the sixth day of the week--Friday"; break;
        case 7: cout<<day<<" The number you've chosen is the seventh day of the week--Saturday"; break;
        default: cout<<day<<" The number you've chosen is not in our Earth planet week's schedule, please find another planet/galaxy that has more than 7 days per their week."; break;
}
    return 0;
}

