// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"vyvedi chislo = ";
	cin>>a;
	if(a%2==0)
	{
		cout<<"chetno"<<endl;
	}
	else
	{
		cout<<"nechetno"<<endl;
	}

	return 0;
}

