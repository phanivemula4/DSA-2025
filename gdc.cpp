#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a;
	int b;
	cin>>a>>b;
	cout<<a<<" is ele 1 "<<b<<" is ele 2 "<<endl;
	vector <int> p;
	int r;
	if(a>b){
		r = a;
	}else{
		r = b;
	}
	for(int i = 1;i<=r;i++){
		if(a%i == 0 && b%i == 0){
			p.push_back(i);
		}
	}
	cout<<"GCD IS : "<<p.back();
	return 0;
}
