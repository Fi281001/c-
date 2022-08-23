#include <stdio.h>
#include <math.h>

int main(){
	int x1, x2, y1, y2;
	printf("Nhap toa do diem A: ");
	scanf("%d%d", &x1, &y1);
	printf("Nhap toa do diem B: ");
	scanf("%d%d", &x2, &y2);
	printf("Khoang cach giua A(%d, %d) va B(%d, %d) la: %.1f", x1, y1, x2, y2, (float)sqrt(pow(x2-x1, 2)+(pow(y2-y1, 2))));
	return 0;
}
