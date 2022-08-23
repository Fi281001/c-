#include<bits/stdc++.h>
int main()
{
    int dd,mm,yyyy;
   
    printf("Nhap(ngay/thang/nam): ");
    scanf("%d %d %d",&dd,&mm,&yyyy);
 
 
    printf("\nNgay thang nam vua nhap la: %2d/%2d/%2d",dd,mm,yyyy%100);
    return 0;
}
