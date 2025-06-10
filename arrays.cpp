#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	map<int,int> x;
	int b = 0;
	for(int i = 0;i<n;i++){
		int target;
		cin>>target;
		x[target]++;
		if(x[target]<=1){
			a[b] = target;
			b++;
		}
	}
	for(int i = 0;i<b;i++){
		cout<<a[i];
	}
}
