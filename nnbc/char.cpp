#include<bits/stdc++.h>
using namespace std;

int demkitua(char str[])
{
	int dem=0, i;
	while(str[i]!='\0'){
		if(str[i]=='a') {
			dem++;
			i++;}
			} 
	return dem;
	}
void dodai(char str[]) {
	int i;
	while(str[i]!='\0'){
			i++;
			} 
	cout<<i+1;
}
void coppy(char str[]) {
	char str2[99]; int dem=0;
	for(int i=0;str[i]!=0;i++){
		str2[dem++]=str[i];
		}
	cout<<str2<<endl;
	}
void sosanh(char str[], char str3[]){
	int ktr=0;
	for(int i=0;i<=strlen(str);i++){
	if(str[i]!=str3[i]){
		if(str[i]<str3[i]){
			ktr=1;
			}
		else {
			ktr=2;
			}
		}
	}
	if(ktr==0){
		cout<<"hai chuoi bang nhau"<<endl;
	}
	else if(ktr==1){
		cout<<"chuoi str nho hon str3"<<endl;

		}
	else {
		cout<<"chuoi str lon hon str3"<<endl;
		}
}
void chuhoa(char str[]){
	
	for(int i=0;i<=strlen(str);i++){
	      if(str[i]>=97&&str[i]<=122)
	         str[i]=str[i]-32;
	   }
	cout<<str;
}

int main(){
	char str[100];
	char str3[100];
	cout<<"nhap chuoi str: "<<endl;
	fflush(stdin);
	cin.getline(str,100);
	cout<<"----------------chuoi sau khi nhap-----------: "<<endl;
	cout<<str<<endl;
	fflush(stdin);
	cout<<"co"<<" "<<demkitua(str)<<" ki tu a"<<endl;
	cout<<"----------------do dai cua chuoi la: ---------------"<<endl;
	dodai(str);
	cout<<endl;
	cout<<"---------chuoi str2 sau khi sao chep là: ---------------"<<endl;
	coppy(str);
	cout<<endl;
	cout<<"------------nhap chuoi can so sanh------------"<<endl;
	cin.getline(str3,100);
	sosanh(str,str3);
	cout<<"------------ham viet hoa-------------"<<endl;
	chuhoa(str);
	return 0;
}
