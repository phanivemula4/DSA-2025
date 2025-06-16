#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int p = 9;
	map<int,int> arr;
	for(int i = 0;i<n;i++){
		int target;
		cin>>target;
		arr[target]++;
		if(arr[target] <= 1){
			a[p] = target;
			p++;
		}
	}
	for(int i = 0;i<p;i++){
		cout<<a[i];
	}
}
