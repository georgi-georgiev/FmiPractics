// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,smallest,largest;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	cout<<"d=";
	cin>>d;
	cout<<"e=";
	cin>>e;
	
	if(a<b)
	{
		smallest=a;
		largest=b;
	}
	else
	{
		smallest=b;
		largest=a;
	}
	if(smallest>c)
	{
		smallest=c;
	}
	if(smallest>d)
	{
		smallest=d;
	}
	if(smallest>e)
	{
		smallest=e;
	}
	if(largest<c)
	{
		largest=c;
	}
	if(largest<d)
	{
		largest=d;
	}
	if(largest<e)
	{
		largest=e;
	}
	
	cout<<"smallest="<<smallest<<endl;
	cout<<"largest="<<largest<<endl;

	return 0;
}
