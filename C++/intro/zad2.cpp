// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,c1,c2,c3;
	cout<<"a=";
	cin>>a;
	c1=a/100;
	c2=(a/10)%10;
	c3=a%10;
	if(a%c1==0 && a%c2==0 && a%c3==0)
	{
		cout<<"deli se"<<endl;
	}
	else
	{
		cout<<"ne se deli"<<endl;
	}
	return 0;
}

