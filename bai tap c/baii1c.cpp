#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char a[80];
	int b[30];
	while (gets(a)){
		int n=strlen(a);
		int dem=0;
		for (int i =0;i<n;i++){
			if (a[i]=='a' || a[i]=='o' || a[i]=='i' || a[i]=='e' || a[i]=='u' || a[i]=='y' || a[i]=='A' || a[i]=='O' || a[i]=='I' || a[i]=='E' || a[i]=='U' || a[i]=='Y' ){
				dem++;
			}
		}
		cout<< dem;
	}
	
	
	return 0;
}
