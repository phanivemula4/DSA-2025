#include<iostream>
using namespace std;
int factorial(int a){
    if (a == 0 || a == 1) {
        return 1;
    }
	if(a > 0){
		return a*factorial(a-1);		
	}
}
int main(){
	int n;
	cin>>n;
	cout<<factorial(n);
}
