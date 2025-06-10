#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main(){
	int n;
	cin>>n;
	int a[100];
	int b[100];
	map<int,int> x;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		x[a[i]]++;
	}
	for(int i = 0;i<n;i++){
		cin>>b[i];
		x[b[i]]++;
	}
	int y = sizeof(x);
	for(auto &pair:x){
		cout<<pair.first;
		y--;
	}
}
