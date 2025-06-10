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
		for(int j = i;j<n;j++){
			if(a[j]<a[i]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}	
	}
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
