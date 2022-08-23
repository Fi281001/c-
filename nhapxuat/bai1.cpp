#include<bits/stdc++.h>
int main(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	int tong;
	tong = a + b;
	
	int hieu;
	hieu = a - b;
	
	int tich;
	tich = a * b;
	
	float thuong;
	thuong = a / b;
	
	printf("\nTong cua %d va %d la %d", a, b, tong);
	printf("\nHieu cua %d va %d la %d", a, b, hieu);
	printf("\nTich cua %d va %d la %d", a, b, tich);
	printf("\nThuong cua %d va %d la %.2f", a, b, thuong);
	return 0;
}
