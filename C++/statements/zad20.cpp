// zad20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>0 && b>0 && c>0)
	{
		if(a+b>c && a+c>b && b+c>a)
		{
			if(a==b && b==c) cout<<"triugulnika e ravnostranen";
			else if(a!=b && b!=c && a!=c) cout<<"trigulnika e raznostranen";
			else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)) cout<<"triugulnika e ravnobedren";
		}
		else
		{
			cout<<"nqma takyv triygylnik";
		}
	}
	else
	{
		cout<<"nqkoq ot stranite e otricatelna";
	}
	system("PAUSE");
	return 0;
}
