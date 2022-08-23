#include<bits/stdc++.h>

int main() {
	char str[100];
	gets(str);
	strlwr(str);
	str[0]=  toupper(str[0]);
	for(int i=1;i<strlen(str);i++){
		if(str[i-1]==' '&& str[i]>='a'&&str[i]<='z'){
			str[i]=toupper(str[i]);
			}
		}
	printf( "%s", str);
	return 0;
	}
			
