#include<bits/stdc++.h>
using namespace std;
void dao (char *s) {
	for( int i=0; i < strlen(s)/2; i++) {
		char t;
		t=s[i];
		s[i]=s[strlen(s)-1];
		s[strlen(s)-1]=t;
		}
		}
int main() {
	int n;
	cin>>n;
	char *st[10000];
	for(int i=0; i<n; i++) {
			st[i]= (char*)malloc(100);
			gets(st[i]);
			dao(st[i]);
			}
	for(int i=n-1; i>=0;i-- ) {
			dao(st[i]);
			puts(st[i]);
			}
return 0;
}
			
