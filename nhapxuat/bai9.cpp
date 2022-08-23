#include<bits/stdc++.h>
int main(){
	float r;
	printf("Nhap ban kinh (m): ");
	scanf("%f", &r);
	printf("Duong trong ban kinh %.0f(m) co chu vi la: %.2f m", r, 2*3.1416*r);
	printf("\nHinh tron ban kinh %.0f(m) co dien tich la: %.2f (m2)", r, 3.1416*r*r);
	return 0;
}
