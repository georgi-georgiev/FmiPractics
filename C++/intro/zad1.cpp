// mada_faka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int c1,c2,c3;
	cout<<"pyrva cifra = ";
	cin>>c1;
	cout<<"vtora cifra = ";
	cin>>c2;
	cout<<"treta cifra = ";
	cin>>c3;
	cout<<"tricifreno chislo = "<<c1*100 + c2*10 + c3<<endl;
	

	return 0;
}

