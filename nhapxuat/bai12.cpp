#include<cstdio>
using namespace std;
int main()
{
int x;
printf("Nhap so giay: ");
scanf("%d",&x);
printf("ket qua:%02d:%02d:%02d", x/3600, (x%3600)/60, (x%3600)%60);
return 0;
}
