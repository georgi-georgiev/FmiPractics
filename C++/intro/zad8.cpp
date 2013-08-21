// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,c1,c2,c3,c4;
	cout<<"a=";
	cin>>a;
	c1=a/1000;
	c2=(a/100)%10;
	c3=(a/10)%10;
	c4=a%10;
	if(a%2!=0 && (c1%3==0 || c2%3==0 || c3%3==0 || c4%3==0) && c1%2==0)
	{
		cout<<"vqrno e"<<endl;
	}
	else
	{
		cout<<"ne e vqrno"<<endl;
	}
	return 0;
}

