///vertikalno
int a[100][100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int j=0;j<n;j++)
	{
		if(j%2==0)
		{
			for(int i=0;i<n;i++)
			{
				cout<<a[i][j];
			}
		}
		else
		{
			for(int i=n-1;i>=0;i--)
			{
				cout<<a[i][j];
			}
		}
	}
///diagonalno
int a[100][100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int k;
	for(int i=0;i<n;i++)
	{
		k=0;
		for(int j=i;j>=0;j--)
		{
			cout<<a[j][k];
			k++;
		}
	}
	for(int j=1;j<n;j++)
	{
		k=j;
		for(int i=n-1;k<n;i--)
		{
			cout<<a[i][k];
			k++;
		}
	}
////pod diagonal
int a[100][100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int j=1;j<n;j++)
	{
		for(int i=n-j;i<n;i++)
		{
			cout<<a[i][j];
		}
	}
////diagonal otstrani
int a[100][100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=i-1;j++)
		{
			cout<<a[i][j];
		}
	}