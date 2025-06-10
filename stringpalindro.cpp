#include<iostream>
using namespace std;
#include<vector>
#include<string>
int check(string b){
	string c = "";
	int e = b.length()-1;
	while(e >= 0){
		c += b[e];
		e--;
	}
	if(c == b){
		cout<<"palindrome";
	}else{
		cout<<"not palindrome";
	}
}
int main(){
	string a;
	cin>>a;
	check(a);
}
