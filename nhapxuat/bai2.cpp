#include <bits/stdc++.h>
using namespace std;
int main(){
	long a, n, i=1, sum=0, t;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &a);
    t=a;
    do
    {
        n=a%8;
        sum = sum + (i*n);
        a=a/8;
        i=i*10;
    }while(a>0);
    printf("\nSo %d trong he 8 la: %d", t, sum);
    return 0;
}
