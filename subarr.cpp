#include<bits/stdc++.h>
using namespace std;
void longo(int a[],int n,int k,vector<int> &ele,int d){
	if(d == n){
		return;
	}
	int t = 0;
	vector<int> set;
	for(int i = d;i<n;i++){
//		cin>>a[i];
		if(t > k){
			t = 0;
			set.clear();
		}
		if(t != k){
			t = t + a[i];
			set.push_back(a[i]);
		}
		if(t == k){
			if(set.size()>ele.size()){
				ele = set;
			}
			d = i;
		}
	}
	longo(a,n,k,ele,d+1);
}
int main(){
	int n;
	cout<<"enter array size";
	cin>>n;
	cout<<"enter number to form";
	int k;
	int a[n];
	cin>>k;
	vector<int> ele;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	longo(a,n,k,ele,0);
	for(int x : ele){
		cout<<x;
	}
}
