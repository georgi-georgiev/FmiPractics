// zad0.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
    int x;
    
    for (x = 1; x <= 15*5; x++)
    {
		if (x==3 || x==6 || x==12 || x==15 || x==66 || x==69 || x==72)
		{
        cout << "* *" <<endl;
		}
		if (x==9 || x==18 || x==24 || x==30 || x==45 || x==60 || x==63 || x==75)
		{
			cout << "***" <<endl;
		}
		if (x==21 || x==27 || x==33 || x==36 || x==39 || x==42 || x==48 || x==51 || x==54 || x==57)
		{
			cout << "*" <<endl;
		}
		if (x==15 || x==30 || x==45 || x==60 || x==75)
		{
			cout <<endl;
		}

    }
    
    system("pause");
    return 0;
}

