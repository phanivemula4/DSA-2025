#include<iostream>
using namespace std;
int sum(int i,int j,int k){
	if(k<=i){
		j = j + k;
		k++;
		sum(i,j,k);
	}else{
		cout<<j;
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	int b = 0;
	int c = 1;
	sum(n,b,c);
}
