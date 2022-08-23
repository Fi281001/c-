#include <bits/stdc++.h>
int main (){
	char a[500],b[500];
	int c[500];
	gets(a);
	int n=strlen(a);
	for (int i=0;i<500;i++){
		c[i]=0;
	}
	b[48]='0';
	for (int i=49;i<=57;i++){
		b[i]=b[i-1]+1;
	}
	b[65]='A';
	for (int i=66;i<=90;i++){
		b[i]=b[i-1]+1;
	}
	b[97]='a';
	for (int i=98;i<=122;i++){
		b[i]=b[i-1]+1;
	}
	for (int i=48;i<=122;i++){
		for (int k=0; k<n;k++){
			if (b[i]==a[k]){
				c[i]++;
			}
		}
		
	}
	for (int i=48;i<=57;i++){
		if (c[i]>0){
			printf("%c    %d\n",b[i],c[i]);
		}
	}
	for (int i=65;i<=90;i++){
		if (c[i]>0){
			printf ("%c    %d\n",b[i],c[i]);
		}
	}
	for (int i=97;i<=122;i++){
		if (c[i]>0){
			printf ("%c    %d\n",b[i],c[i]);
		}
	}
	return 0;
	}
