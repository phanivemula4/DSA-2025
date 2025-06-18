#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};
void insertion(node* &head){
	node* newnode = new node;
	cout<<"enter node data : ";
	cin>>newnode->data;
	newnode->next = head;
	head = newnode;
}
void display(node* &head){
	node* temp = head;
	while(temp != nullptr){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<endl;
}
int main(){
	node* head = nullptr;
	while(1){
		cout<<"enter 1 for insertion | 2 to display | 3 to exit :";
		int ch;
		cin>>ch;
		switch(ch){
			case 1:insertion(head);
			break;
			case 2:display(head);
			break;
			case 3:return 0;
			break;
		}
	}
}
