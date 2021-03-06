#include <iostream>

using namespace std;

struct node{
	int data;
	struct node * next;
}

node *head = NULL;

struct node *searchNode(int n){
	if(head == NULL){
		return head;
	}
	node *cur = head;
	node *prev = head;
	
	while(cur){
		if(cur->data == n){
			return cur;
		}
		if(cur->data > n){
			return prev;
		}
		prev = cur;
		cur = cur->next;
	}
}

struct node *searchNode2(int n){
	if(head == NULL){
		return head;
	}
	node *cur = head;
	node *prev = head;
	while(cur){
		if(cur->data == n){
			return cur;
		}
		prev = cur;
		cur = cur->next;
	}
	return cur;
}

void addNode(int n){
	node *newNode = new node;
	newNode->data = n;
	newNode->next = NULL;
	
	if(head == NULL){
		head = newNode;
		return;
	}
	node *cur = head;
	while(cur){
		if(cur->next == NULL){
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

void insertNode(int n){
	node *ptr = searchNode(n);
	node *newNode = new node;
	newNode->data = n;
	node *cur = head;
	while(cur){
		if(cur == ptr){
			newNode->next = cur->next;
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

void deleteNode(int n){
	node *ptr = searchNode(n);
	if(ptr == NULL){
		cour << "No node with data = " << n << endl;
	}
	
	if(ptr == head){
		head == ptr->next;
		return;
	}
	node *cur = head;
	node *prev = head;
	
	while(cur){
		if(cur == ptr){
			prev->next = cur->next;
			return;
		}
		prev = cur;
		cur = cur->next;
	}
	
}

void display(){
	struct node *list = head;
	
	while(list){
		cout << list->data << " ";
		list = list->next;
	}
	cour << endl;
}


int main(){
	addNode(4);
	display();
	addNode(546);
	display();
	addNode(100);
	display();
	addNode(67);
	display();
}