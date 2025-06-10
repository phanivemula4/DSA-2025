#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	int t = 0;
	vector<int> b;
	for(int i = 0;i<n;i++){
		int r;
		cin>>r;
		if(r == 1){
			t++;
		}else{
			b.push_back(t);
			t = 0;
		}
	}
	int p = 0;
	for(int e : b){
		if(e > p){
			p = e;
		}
	}
	cout<<p;
}
