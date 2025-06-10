#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	cout<<"enter -1 to stop entering";
	int r = 0;
	for(int i = 0;i<n;i++){
		int t;
		cin>>t;
		if(t == -1){
			return 0;
		}else{
			a[i] = t;
			r++;
		}
	}
	cout<<"missing numbers : ";
	for(int i = 0;i<n;i++){
		for(int j = 0;j<r;j++){
			if(a[j] == i){
				cout<<;
			}
		}
	}
}
