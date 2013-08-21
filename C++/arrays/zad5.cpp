#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	cout<<max;
    return 0;  
}
