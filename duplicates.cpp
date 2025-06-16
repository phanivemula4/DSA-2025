#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	map<int,int> arr;
	int p = 0;
	for(int i = 0;i<n;i++){
		int target;
		cin>>target;
		if(arr[target] == 0){
			a[p] = target;
			arr[target]++;
			p++;
		}
	}
	for(int i = 0;i<p;i++){
		cout<<a[i];
	}
}
