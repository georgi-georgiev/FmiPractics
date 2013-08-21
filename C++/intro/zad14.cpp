// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,b,c,temp;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	
	if(a!=b && b!=c && a!=c)
	{
		if(a<b && b>c && a>c)
		{
			temp=b;
			b=a;
			a=c;
			c=temp;
		}
		if(a<b && b>c && a<c)
		{
			temp=b;
			b=c;
			c=temp;
		}
		if(a>b && b>c)
		{
			temp=a;
			a=c;
			c=temp;
		}
		if(a>b && b<c && a>c)
		{
			a=temp;
			a=b;
			b=c;
			c=temp;
		}
		if(a>b && b<c && a<c)
		{
			temp=b;
			b=a;
			a=temp;
		}

		cout<<a<<b<<c<<endl;
	}
	else
	{
		cout<<"ima ravni 4isla"<<endl;
	}
	return 0;
}
