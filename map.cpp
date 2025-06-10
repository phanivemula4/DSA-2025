#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10] = {2,3,1,2,3,4,4,1,1,1};
	map<int,int> b;
	for(int i = 0;i<10;i++){
		b[a[i]]++;
	}
	int c;
	cin>>c;
	cout<<b[c];
}
