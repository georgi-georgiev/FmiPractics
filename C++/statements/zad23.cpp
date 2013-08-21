// zad23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1,x2,y1,y2,z1,z2,a,b,c,p;
	double p2,s;
	cin>>x1;
	cin>>x2;
	cin>>y1;
	cin>>y2;
	cin>>z1;
	cin>>z2;
	a=sqrt(pow((x1-y2),2)+pow((x2-y1),2));
	b=sqrt(pow((y1-z2),2)+pow((y2-z1),2));
	c=sqrt(pow((z1-x2),2)+pow((z2-x1),2));
	if(a>0 && b>0 && c>0)
	{
		if(a+b>c && a+c>b && b+c>a)
		{
			p=a+b+c;
			p2=p/2;
			s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
			cout<<"p="<<p<<endl;
			cout<<"s="<<s<<endl;
		}
		else
		{
			cout<<"nqma takyv triygylnik";
		}
	}
	else
	{
		cout<<"nqkoq ot stranite e otricatelna";
	}
	system("PAUSE");
	return 0;
}
