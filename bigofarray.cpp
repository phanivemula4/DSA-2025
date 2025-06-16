#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	int num = 0;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(a[i]>num)
		{
			num = a[i];
		}
	}
	cout<<num;
}
