#include <stdio.h>
#include <math.h>
int main(){
	float a;
	printf("Nhap so thuc: ");
	scanf("%f", &a);
	printf("Can bac 2 cua %.0f la: %.3f", a, sqrt(a));
	return 0;
}
