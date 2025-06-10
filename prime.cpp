#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a == 1 || a == 2){
		cout<<"it is prime";
		return 0;
	}else{
		for(int i = 2;i<a;i++){
			if(a%i == 0){
				cout<<"it is not prime number";
				return 0;
			}
		}
	}
	cout<<"it is a prime";
}
