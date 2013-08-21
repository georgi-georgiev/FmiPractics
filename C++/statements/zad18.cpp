// zad18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	double x,y,r;
	cin>>x;
	cin>>y;
	cin>>r;
	if(x*x + y*y<=r*r) cout<<"tochkata leji na kryga";
	else cout<<"tochkata ne leji na kryga";
	system("PAUSE");
	return 0;
}
