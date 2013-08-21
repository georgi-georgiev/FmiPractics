// zad2-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	double a,b,c,p,s;
	cout<<"strana1=";
	cin>>a;
	cout<<"strana2=";
	cin>>b;
	cout<<"strana3=";
	cin>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"lice="<<s<<endl;


	return 0;
}

