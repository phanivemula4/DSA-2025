#include<iostream>
using namespace std;
#include<vector>
#include<string>
int main(){
	int num;
	cin>>num;
	int x = num;
	int arm = 0;
	    while (num > 0) {
        int digit = num % 10;
        arm = arm+(digit*digit*digit);
//        cout << digit << " ";  
        num = num / 10;       
    }
    if(arm == x){
    	cout<<"armstrong";
	}else{
		cout<<"not armstrong";
	}
}
