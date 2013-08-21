// zad25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"izberi operaciq:"<<endl
		<<"0 - za sybirane"<<endl
		<<"1 - za izvajdane"<<endl
		<<"2 - za umnojenie"<<endl
		<<"3 - za cqla chast delenie"<<endl
		<<"4 - za ostatyk ot delenie"<<endl;
	cin>>c;
	if(c==0) cout<<a+b;
	if(c==1) cout<<a-b;
	if(c==2) cout<<a*b;
	if(c==3) cout<<a/b;
	if(c==4) cout<<a%b;
	system("PAUSE");
	return 0;
}