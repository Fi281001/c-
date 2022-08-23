#include<bits/stdc++.h>
using namespace std;
int findMin(int A[], int n)
{
	if (n == 1)
		return A[0];
	else
		return min(A[n-1],findMin(A, n-1));
	}
int main(){
	int n;
	cin>>n;
	int A[n+1];
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<findMin(A,n);
	return 0;
	}

