#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int n;
	bool c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1]) c=true;
		else c=false;
		
	}
	cout<<c;
    return 0;  
}
