// zad17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int x1,x2;
	cin>>x1;
	cin>>x2;
	if(x1==0 && x2==0) cout<<"centyr";
	else if(x1==0 && x2!=0) cout<<"leji na abcisata";
	else if(x1!=0 && x2==0) cout<<"leji na ordinatata";
	else if(x1>0 && x2>0) cout<<"1 kvadrant";
	else if(x1<0 && x2>0) cout<<"2 kvadrant";
	else if(x1<0 && x2<0) cout<<"3 kvadrant";
	else if(x1>0 && x2<0) cout<<"4 kvadrant";
	system("PAUSE");
	return 0;
}
