#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int n,b,count=0;
	bool k=false;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<"b=";
	cin>>b;
	for(int i=0;i<n;i++)
	{
		if(a[i]==b) count++;
	}
	cout<<count<<endl;

    return 0;  
}