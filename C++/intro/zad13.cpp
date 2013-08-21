// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	if(a>b && a>c)
		cout<<a;

	if(b>a && b>c)
		cout<<b;

	if(c>b && c>a)
		cout<<c;
	

	return 0;
}

