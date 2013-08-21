#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=0;i<n/2;i++)
	{
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;

	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<"a["<<i<<"]=";
		cout<<a[i]<<"\n";
	}

    return 0;  
}
