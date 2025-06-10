#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10] = {1,2,2,1,1,4,5,1,1,6};
	int hash[11] = {0};
	for(int i = 0;i <11;i++){
		hash[a[i]] += 1;
	}
	int b ;
	cin>>b;
	cout<<hash[b];
	
}
