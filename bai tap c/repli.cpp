#include <bits/stdc++.h>
using namespace std;
void in(int a[], int n){
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
}
void out(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int findmax(int a[], int n){ //dpt=O(n)
	int max=a[0];
	for(int i=1; i<n; i++){ 
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void reverse_arr(int a[], int n){ //dao nguoc mang dpt=O(n)
	for(int i=0; i<=n/2; i++){
		int tam=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=tam;
	}
}
bool ktdoixung(int a[], int n){ //dpt=O(n)
	for(int i=0; i<=n/2; i++){
		if(a[i]!=a[n-1-i]){
			return 0;
		}
	}
	return 1;
}
int socapnghichdao(int a[], int n){   //dpt=O(n*n)
	int count=0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				count++;
			}
		}
	}
	return count;
}

int demcapbangx(int a[], int n, int x){ //dpt=O(n*n)
	int count=0;
	for(int i=0; i<n-1; i++){
		if(a[i]<=x){
			for(int j=i+1; j<n; j++){
				if(a[j]<=x){
					if(a[i]+a[j]==x) count++;
				}
			}
		}
	}
	return count;
}

void arrd(int a[], int n, int d[]){ //dpt=O(n*n)
	d[n-1]=0;
	for(int i=0; i<n-1; i++){
		int count=0;
		for(int j=i+1; j<n; j++){
			if(a[j]<=a[i]){
				count++;
			}
		}
		d[i]=count;
	}
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n], d[n];
	cout<<"Nhap cac phan tu cua mang: "<<endl;
	in(a, n);
	cout<<"Mang da nhap: "<<endl;
	out(a, n);
	 cout<<"Phan tu lon nhat cua mang: "<<findmax(a, n)<<endl;
	 cout<<"Mang sau khi dao nguoc: "<<endl;
	 reverse_arr(a, n);
	 out(a, n);
	 if(ktdoixung(a, n)){
	 	cout<<"Mang doi xung."<<endl;
	 }
	else{
	 	cout<<"Mang khong doi xung."<<endl;
	 }
	 cout<<"So cap nghich dao trong mang la: "<<socapnghichdao(a, n)<<endl;
	 cout<<"Nhap 1 so de dem cap bang no: ";
	 int x;
	 cin>>x;
cout<<"So cap bang "<<x<<" la: "<<demcapbangx(a, n, x)<<endl;
	 arrd(a, n, d);
	 cout<<"Mang d la: "<<endl;
	 out(d, n);
	return 0;
}
