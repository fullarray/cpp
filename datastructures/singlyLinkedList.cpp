#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class list{
	private:
		node *head, *tail;
	public:
		list(){
			head=NULL;
			tail=NULL;
		}
		
		void createNode(int value){
			node *temp = new node;
			temp->data = value;
			temp->next = NULL:
			if(head == NULL){
				head = temp;
				tail = temp;
				temp = NULL:
			}else{
				tail->next = temp;
				tail = temp;
			}
		}
		
		void insertBegin(int value){
			node *temp = new node;
			temp->data = value;
			temp->next = head;
			head = temp;
		}
		
		void insertPosition(int pos, int value){
			node *pre = new node;
			node *cur = new node;
			node *temp = new node;
			cur = head;
			for(int i = 1; i < pos; i++){
				pre = cur;
				cur = cur->next;
			}
			temp->data = value;
			pre->next = temp;
			temp->next = cur;
		}
		
		void deleteFirst(){
			node *temp = new node;
			temp = head;
			head = head->next;
			delete temp;
		}
		
		void deleteLast(){
			node *current = new node;
			node *previous = new node;
			current = head;
			while(current->next != null){
				previous = current;
				current = current->next;
			}
			tail = previous;
			previous->next = NULL:
			delete current;
		}
		
		void deleteIndex(int pos){
			node *current = new node;
			node *previous = new node;
			current = head;
			for(int i = 1; i<pos; i++){
				previous = current;
				current = current->next;
			}
			previous->next = current->next;
		}
		
		void display(){
			node *temp = new node;
			temp = head;
			while(temp!=NULL){
				cout << temp->data << "\t";
				temp = temp->next;
			}
		}
		
		int main(){
			list o;
			o.createNode(57);
			o.createNode(12);
			o.createNode(8);
			o.createNode(77);
			o.display();
			return 0;
		}
}