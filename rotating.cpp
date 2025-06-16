#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter number of elements : ";
	cin>>n;
	int a[n] = {0};
	int r;
	cout<<"enter number of rotations : ";
	cin>>r;
	for(int i = 0;i<n;i++){
		cin>>a[(i+r)%n];
	}
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
