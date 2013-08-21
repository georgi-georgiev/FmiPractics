// zad6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int a,b,temp;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	temp=b;
	b=a;
	a=temp;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}

