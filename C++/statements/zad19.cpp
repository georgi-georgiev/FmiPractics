// zad19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int a,c1,c2;
	cin>>a;
	c1=(a/10)%10;
	c2=a%10;
	if(c1==0 && c2==0)
	{
		if(a%400==0) cout<<"godinata e visokosna";
		else cout<<"godinata ne e visokosna";
	}
	else
	{
		if(a%4==0) cout<<"godinata e visokosna";
		else cout<<"godinata ne e visokosna";
	}
	system("PAUSE");
	return 0;
}
