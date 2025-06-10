#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int r;
	cout<<"enter num of rotations : ";
	cin>>r;
	int a[n] = {0};
	for(int i = 0;i<n;i++){
		int ele;
		cin>>ele;
		a[(i+r)%n] =ele ;
	}
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
//Left rotation by r ? use index (i - r + n) % n 


