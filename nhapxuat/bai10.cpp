#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	printf("Nhap chieu dai, chieu rong: ");
	scanf("%f%f", &a, &b);
	printf("Chu vi va dien tich cua hinh chu nhat %.0fx%.0f lan luot la: C = %.0f, S = %.0f", a, b, (a+b)*2, a*b);
	return 0;
}
