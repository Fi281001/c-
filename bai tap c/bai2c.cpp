#include <stdio.h>
#include <string.h>
int main (){
	char a[200000],b[100];
	gets(a);
	int n=strlen (a);
	b[0]='a';
	for (int i=1;i<26;i++){
		b[i]=b[i-1]+1;
	}
	for (int i=0;i<n;i++){
		for (int k=0;k<strlen(b);k++){
			if (a[i]==b[k]){
				for (int z=k;z<strlen(b);z++){
					b[z]=b[z+1];
					b[strlen(b)]='\0';
				}
			}
		}
	}
	if (b[0]=='\0'){
		printf ("None");
		return 0;
	}
	printf ("%c",b[0]);
	return 0;
}
