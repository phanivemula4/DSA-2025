#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(a[j+1]<a[j]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int x =0;x<n;x++){
		cout<<a[x]<<" ";
	}
}
