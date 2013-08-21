// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a,c1,c2,c3,c4,c5;
	cout<<"vyvedi 5 cifreno chislo = ";
	cin>>a;
	c1=a/10000;
	c2=(a/1000)%10;
	c3=(a/100)%10;
	c4=(a/10)%10;
	c5=a%10;
	cout<<"cifra1="<<c1<<endl;
	cout<<"cifra2="<<c2<<endl;
	cout<<"cifra3="<<c3<<endl;
	cout<<"cifra4="<<c4<<endl;
	cout<<"cifra5="<<c5<<endl;
	return 0;
}

