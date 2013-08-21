#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int b[1000];
	int c[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<"b["<<i<<"]=";
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<"c["<<i<<"]="<<c[i]<<"\n";
	}
    return 0;  
}