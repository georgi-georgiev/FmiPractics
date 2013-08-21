	int a[100];
	int b[100];
	int c[200];
	int n,m;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int countA=0,countB=0;
	while(countA<n && countB<m)
	{
			if(a[countA]<b[countB])
			{
				c[countA+countB]=a[countA];
				countA++;
			}
			else
			{
				c[countA+countB] = b[countB];
				countB++;
			}
	}
	int j=countA+countB;
	if(n<m)
	{
		for(int i=countB;i<m;i++)
		{
			c[j]=b[i];
			j++;
		}
	}
	else if(n==m)
	{
		c[j]=b[m-1];
	}
	else
	{
		for(int i=countA;i<m;i++)
		{
			c[j]=a[i];
			j++;
		}
	}

	for(int i=0;i<n+m;i++)
	{
		cout<<c[i];
	}
/////
	int size;
	cin>>size;
	int a[100][100];
	int starti=0,startj=0,endi,endj;
	endi=endj=size-1;
	int num=1;
	do{
		for(int i=startj;i<=endj;i++)
		{
			a[starti][i]=num;
			num++;
		}
		starti++;
		for(int i=starti;i<=endi;i++)
		{
			a[i][endj]=num;
			num++;
		}
		endj--;
		for(int i=endj;i>=startj;i--)
		{
			a[endi][i]=num;
			num++;
		}
		endi--;
		for(int i=endi;i>=starti;i--)
		{
			a[i][startj]=num;
			num++;
		}
		startj++;
	}while(starti<endi && startj<endj);
	if(size%2==1)
	{
		a[size/2][size/2] = num;
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout<<a[i][j]<<endl;
		}
	}
////
	char str1[100];
	cin.getline(str1, 100);
	char str2[100];
	int count1=0;
	int count2=0;
	cin.getline(str2, 100);
	for(int i=0;str1[i]!='\0';i++)
	{
		count1++;
	}
	for(int i=0;str2[i]!='\0';i++)
	{
		count2++;
	}
	if(count1>count2)
	{
		for(int i=0;str1[i]!='\0';i++)
		{
			cout<<str1[i];
		}
	}
	else
	{
		for(int i=0;str2[i]!='\0';i++)
		{
			cout<<str2[i];
		}
	}