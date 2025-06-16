#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int t = 0;
	int k = 0;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(a[i] == 1){
			t++;
		}else{
		 	if(t > k){
		 		k = t;
		 		t = 0;
			 } 
		}
	}
	cout<<k;
}
