#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	int b = 0;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(a[i] >= b){
			b = a[i];
		}else{
			cout<<"it is not sorted array";
			return 0;
		}
	}
	cout<<"it is a sorted array";
}
