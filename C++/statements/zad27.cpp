// zad27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a1,a2,b1,b2,c1,c2,nachalen,kraen;
	cin>>a1;
	cin>>a2;
	cin>>b1;
	cin>>b2;
	cin>>c1;
	cin>>c2;
	nachalen=a1;
	if(nachalen<b1) nachalen=b1;
	if(nachalen<c1) nachalen=c1;
	kraen=a2;
	if(kraen>b2) kraen=b2;
	if(kraen>c2) kraen=c2;
	if(nachalen<kraen) cout<<"yes"<<" "<<nachalen<<" "<<kraen;
	else cout<<"no";

	system("PAUSE");
	return 0;
}