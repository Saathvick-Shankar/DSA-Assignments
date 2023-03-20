#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//creating a node 

class Node{
	public:
		int value;
		Node* next;
		
};

int main(){
	int x;
	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	
	cout<<"Enter the value to be evaluated:"<<endl;
	cin>>x;
	cout<<"The polynomial is 5x^2 + 3x + 2"<<endl;
	
	
	one = new Node();
	two = new Node();
	three = new Node();
	
	
	one->value = 5*x*x;
	two->value = 3*x;
	three->value = 2;
	int val = one->value + two->value + three->value;
	
	//connect nodes
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	

	//print linked list value
	head = one;
	cout<<"The result is:"<<val;
	return 0;
	
}
