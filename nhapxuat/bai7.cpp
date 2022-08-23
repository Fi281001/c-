#include <stdio.h>
int main(){
	int a, b, c;
	printf("Nhap a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("Trung binh cong cua %d, %d va %d la: %.2f", a, b, c, (float)(a+b+c)/3);
	return 0;
}
