// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,c1,c2,c3;
	cout<<"3 cifreno chislo = ";
	cin>>a;
	c1=a/100;
	c2=(a/10)%10;
	c3=a%10;
		if(c1<=c2 && c2<=c3)
		{
			cout<<"narastva"<<endl;
		}
		else
		{
			cout<<"ne narastva"<<endl;
		}

	return 0;
}
