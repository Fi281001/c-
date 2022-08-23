#include<bits/stdc++.h>

int main()
{
	long long a[100000]={0};
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) 
		scanf("%lld", &a[i]);
	int td=1;
	for(int i=0; i<n-1; i++)
		if(a[i]> a[i+1]) {
			td=0;
			break;
			}
		if(td)
		 printf("Yes"); 
		 else printf("No");
		return 0;
}
