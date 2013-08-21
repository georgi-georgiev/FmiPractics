#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int n,sum=0,proizvedenie=1;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0) sum+=a[i];
		else proizvedenie*=a[i];
	}
    return 0;  
}
