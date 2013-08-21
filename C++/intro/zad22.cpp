// zad22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	double x,a,b;
	cin>>x;
	a=2*x - 3.6;
	if(a<0) a= -a;
	b=2.5*x - 10;
	if(b<0) b= -b;
	cout<<a-b-2.5;
	system("PAUSE");
	return 0;
}
