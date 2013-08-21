// zad7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double a,b,c,cena;

	cout<<"cena na kilogram domati = ";
	cin>>a;
	cout<<"kolko kilograma iskate da kupite = ";
	cin>>b;
	cout<<"taksa(%) = ";
	cin>>c;
	cena=a*b + (a*b)*(c/100);
	cout<<"kraina cena = "<<cena<<endl;

	return 0;
}

