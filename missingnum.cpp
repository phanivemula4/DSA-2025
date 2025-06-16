#include<bits/stdc++.h>
using namespace std;
void missing(int arr[],int n){
	int t = 1;
	int k = 0;
	while(t<=n){
		if(arr[k] != t){
			cout<<t;
			t++;
		}
		else{
			t++;
			k++;
		}
	}
	return;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		int t;
		cin>>t;
		if(t == -1){
			cout<<"ok";
			missing(a,n);
		}
		else{
			a[i] = t;
		}
	}
}
