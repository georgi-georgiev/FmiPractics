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
			cout<<a<<endl;
		}
		else
		{
			if(a!=b)
			{
			cout<<b<<endl;
			}
			else
			{
				cout<<"ravni sa"<<endl;
			}
		}

	return 0;
}
