#include<iostream>
using namespace std;
int display(int a,int d){
	if(d < a){
		d++;
		cout<<(a-d)<<endl;
		display(a,d);
	}else{
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	int c = 0;
	display(n,c);
}
