// zad8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double ax,ay,bx,by;

	cout<<"koordinata x za tochka A = ";
	cin>>ax;
	cout<<"koordinata y za tochka A = ";
	cin>>ay;
	cout<<"koordinata x za tochka B = ";
	cin>>bx;
	cout<<"koordinata y za tochka B = ";
	cin>>by;

	cout<<sqrt(pow((ax-by),2)+pow((ay-bx),2))<<endl;

	return 0;
}

