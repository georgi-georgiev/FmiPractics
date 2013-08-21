// zad16.cpp : Defines the entry point for the console application.
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
	if(b<=a)
	{
		if(c>=b && c<=a) cout<<"v intervala e";
		else cout<<"ne e v intervala";
	}
	else
	{
		if(c>=a && c<=b) cout<<"v intervala e";
		else cout<<"ne e v intervala";
	}
	system("PAUSE");
	return 0;
}
