#include<bits/stdc++.h>
using namespace std;
#include<string>
int main(){
	string a = "aaajjjpppddd";
	int hash[256] = {0};
	for(int i = 0;i <a.length();i++){
		hash[a[i]]++;
	}
	char b ;
	cin>>b;
	cout<<hash[b];
	return 0;
}
