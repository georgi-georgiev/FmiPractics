// zad1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"godini=";
	cin>>a;
	a*=365;
	cout<<"dni="<<a<<endl;
	a*=24;
	cout<<"chasove="<<a<<endl;
	a*=60;
	cout<<"minuti="<<a<<endl;
	a*=60;
	cout<<"sekundi="<<a<<endl;
	return 0;
}

