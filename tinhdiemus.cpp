#include<bits/stdc++.h>
int main()
{
	int n;
	char a[1001];
	gets(a);
	int dem=0,kq=0;
	n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]=='S')
		{
			dem++;
			kq=kq+dem;
		}
		else dem=0;
	}
	printf("%d",kq);
}
