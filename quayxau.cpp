#include <bits/stdc++.h>
using namespace std;
void dao(char a[], int n){
	for (int i=n-1; i>0; i--){
		a[i]=a[i-1];
	}
}
int main (){
	char a[100], b[100],c;
	int dem=0;
	gets (a);
	gets (b);
	int n=strlen(a);
	for (int i=0; i<n; i++){
		c=a[n-1];
		dao(a,n);
		a[0]=c;

		for (int k=0; k<n; k++){
			if (a[k]==b[k]){
				dem++;
			}
		}

	 	if (dem==n){
			printf ("YES");
			return 0;
		}
		dem=0;
	}
	printf ("NO");
	return 0;
}
