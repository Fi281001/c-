#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	char a[100];
	while(gets(a) != NULL){
		int dem =0;
		for(int i=0;i<strlen(a);i++){
			if(a[i]=='a'||a[i]=='o'||a[i]=='y'||a[i]=='i'||a[i]=='e'||a[i]=='u'||a[i]=='A'||a[i]=='O'||a[i]=='Y'||a[i]=='I'||a[i]=='E'||a[i]=='U'){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
	
return 0;
}
