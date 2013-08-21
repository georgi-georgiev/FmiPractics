// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	if(a<b)
	{
		a*=4;
		b-=5;
	}
	else
	{
		a-=5;
		b*=4;
	}
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	return 0;
}

