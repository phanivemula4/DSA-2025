#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n] = {0};
	int t = 0;
	for(int i = 0;i<n;i++){
		int target;
		cin>>target;
		if(target != 0){
			a[t] = target;
			t++;
		}
	}
	for(int i = 0;i<n;i++){
		cout<<a[i];
	}
}
