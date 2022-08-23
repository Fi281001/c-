#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100],int n)
   {
   int i,j;
   for(i=0;i<n;i++)
       {
       for(j=0;j<n;j++)
           cin>>a[i][j];
       }
   }

void hoanvi(int a[][100], int b[][100], int n)
{
	int i,j;
	for ( i = 0; i < n; i++)
		for ( j = 0; j < n; j++)
			b[i][j] = a[j][i];
}

int kiemtra(int a[100][100],int n)
  {
  int b[n][100];
  int i,j;
  hoanvi(a,b, n);
	for ( i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] != b[i][j])
				return 0;
    return 1;
}

main()
{
	int a[100][100];
    int n;
	cin>>n;
	nhap(a, n);
	if (kiemtra(a, n)) 
		cout << "Yes";
	else
	cout << "No";
	return 0;
} 
	
