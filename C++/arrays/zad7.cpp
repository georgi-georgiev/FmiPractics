#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int n,b;
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
		if(a[i]==b && k!=true)
		{
			cout<<"yes"<<" "<<"a["<<i<<"]"<<endl;
			k=true;
		}
	}

    return 0;  
}
