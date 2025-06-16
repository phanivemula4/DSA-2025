#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	int b = 0;
	int c = 0;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(a[i]>b){
			b = a[i];
		}if(a[i]>0 && a[i]<b && a[i]>c){
			c = a[i];
		}
	}
	cout<<b;
	cout<<c;
}
