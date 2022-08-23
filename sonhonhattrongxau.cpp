#include<bits/stdc++.h>
#include<string.h>



int main(){

	char *str;
	str=(char*)malloc(sizeof(char));
	gets(str);
	char *p=str;
	long t=1000;
	while (*p) {
    if ( isdigit(*p) || ( (*p=='-'||*p=='+') && isdigit(*(p+1)) )) {
        long val = strtol(p, &p, 10);
        if(val<t) t=val;
    } else {
        p++;
    }
	}
	printf("%ld", t);
	return 0;
}
