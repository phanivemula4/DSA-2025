#include<iostream>
using namespace std;
int display(int a){
	if(a != 0){
		cout<<"hello"<<endl;
		a--;
		display(a);
	}else{
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	display(n);
}
