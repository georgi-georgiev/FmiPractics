// zad24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	d=(b*b) - (4*a*c);
	if(d>=0)
	{
		cout<<"x1="<<((-b +sqrt(d))/(2*a))<<endl;
		cout<<"x2="<<((-b -sqrt(d))/(2*a))<<endl;
	}
	else
	{
		cout<<"no solutions";
	}
	system("PAUSE");
	return 0;
}
