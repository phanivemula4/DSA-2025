#include<iostream>
using namespace std;
int reverse(int b[],int d){
	if(d == 0){
		return 0;
	}
	cout<<b[d-1]<<" ";
	reverse(b,d-1);
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	reverse(a,n);
}
