#include <stdio.h>
#include <string.h>
using namespace std;

 
char *daonguoc(char *st)
{
    int len = strlen(st);
    char *doi;
    for (int i = 0; i < len; i++)
    {
        doi[i] = st[len - 1 - i];
    }
    doi[len] = NULL;
    return doi;
}
char *left(char *st, int n)
{
	char *p;
	for(int i=0; i<n; i++){
		p[i]=st[i];
	}
	p[n]= NULL;
	return p;
}
char *trich(char *st, int m, int n){
	char *p;
	int k= m;
	for (int i=0; i<n; i++){
		p[i]= st[k];
		k++;
	}
	p[n]= NULL;
	return p;
}
int strcmp(char *s, char *t){
	int k, len;
	int lens=strlen(s), lent=strlen(t);
	if (lens>lent) len=lent;
	for (int i=0; i< len; i++){
		if (s[i]>t[i]){k=1; break;}
		if (s[i]<t[i]){k=-1; break;}
		if (s[i]==t[i]) k=0;
		}
	return k;
}
 
int main()
{
    char s[100], t[100];
    int n;
    printf("\nNhap chuoi s: ");	//chuoi s lam luon cau 5 
    fgets(s, 100, stdin);
    printf("\nNhap chuoi t: ");	//chuoi t cau 5
    fgets(t, 100, stdin);
    char *kq = daonguoc(s);
    printf("Chuoi sau khi dao la: %s", kq);
    
	
	int v, m;	
	printf("\nNhap n va m: "); scanf("%d %d", &v, &m);
	printf("\nChuoi co chieu dai bang %d bat dau tu %d cua chuoi chinh la: %s", v, m, trich(s, m, v));
	
	int f=strcmp(s, t);
	if (f==1) printf("\nChuoi s lon hon t.");
	if (f==0) printf("\nHai chuoi bang nhau.");
	if (f==-1) printf ("\nChuoi t lon hon s.");
	return 0;
	
}
