// zad5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
	int a,b;
	cout<<"vyvedi 5 celi chisla = ";
	cin>>a;
	b=(a%100000)/10000 +(a%10000)/1000 + (a%1000)/100 + (a%100)/10 + a%10;
	cout<<"sredno aritmetichno ="<<b/5<<endl;
	return 0;
}

