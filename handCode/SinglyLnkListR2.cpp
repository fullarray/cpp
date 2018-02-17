#include <iostream>

using namespace std;

struct node{
	int data;
	struct node *next;
};

class Linked_list{
	private:
		node *head, *tail;
	public:
		linked_list(){
			head = NULL;
			tail = NULL;
		}
		
		void add_node(int n){
			node *tmp = new node;
			tmp->data = n;
			tmp->next = NULL;
			
			if(head == NULL){
				head = tmp;
				tail = tmp;
			}else{
				tail->next = tmp;
				tail = tail->next;
			}
		}
};

int main(){
	linked_list a;
	a.add_node(3);
	a.add_node(8);
	
	return 0;
}

