#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
	int top;
	
	public:
		int a[MAX];
		Stack(){ top = -1;}
		bool push(int x);
		int pop();
		bool isEmpty();
};

bool Stack::push(int x){
	if(top >= MAX){
		cout << "Stack Overflow";
		return false;
	}else{
		a[++top] = x;
		return true;
	}
}

int Stack::pop(){
	if(top < 0){
		cout << "Stack Underflow";
		return 0;
	}else{
		int x = a[top--];
		return x;
	}
}

bool Stack::isEmpty(){
	return (top < 0);
}

//Driver program to test functions defined above
int main(){
	struct Stack s;
	s.push(40);
	s.push(50);
	s.push(10);
	s.push(90);
	
	cout << s.pop() << " Popped from stack\n";
	return 0;
}