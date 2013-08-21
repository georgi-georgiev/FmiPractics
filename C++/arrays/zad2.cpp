#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if((a[i]/2)%2!=0) sum+=a[i];
	}
	cout<<sum;
    return 0;  
}
