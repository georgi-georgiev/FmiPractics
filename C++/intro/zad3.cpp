// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,c1,c2,c4,c5;
	cout<<"vyvedi 5 cifreno chislo = ";
	cin>>a;
	c1=a/10000;
	c2=(a/1000)%10;
	c4=(a/10)%10;
	c5=a%10;
	if(c1==c5 && c2==c4)
	{
		cout<<"ogledalno"<<endl;
	}
	else cout<<"ne e ogledalno"<<endl;
	return 0;
}

