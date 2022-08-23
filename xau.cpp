	#include <bits/stdc++.h>
using namespace std;
int main (){
	char a[100000];
	gets (a);
	printf ("%c",a[0]);
	for (int i=1; i<strlen(a);i++){
		if (i%2==0){
			printf ("%c",a[i]);
		}
	}
	return 0;
}
