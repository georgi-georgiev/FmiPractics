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
	if((c1==c2) || (c1==c3) || (c1==c4) || (c2==c3) || (c2==c4) || (c3==c4))
	{
		cout<<"ravni"<<endl;
	}
	else
	{
		cout<<"ne sa ravni"<<endl;
	}
	return 0;
}

