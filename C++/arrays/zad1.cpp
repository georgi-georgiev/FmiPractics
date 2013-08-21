#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int array[1000];
	for(int i=0;i<n;i++)
	{
		cout<<"array["<<i<<"]=";
		cin>>array[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<"array["<<i<<"]="<<array[i]<<"\n";
	}

    return 0;  
}
