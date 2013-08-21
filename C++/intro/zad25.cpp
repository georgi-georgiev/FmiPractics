// zad25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a<0 && a>23) cout<<"nqma takyv chas";
	if(a>=4 && a<=8) cout<<"dobro utro";
	if(a>8 && a<=18) cout<<"dobyr den";
	if(a>18 || a<4) cout<<"dobyr vecher";
	system("PAUSE");
	return 0;
}