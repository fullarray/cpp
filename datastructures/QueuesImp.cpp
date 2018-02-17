#include <iostream>
#include <cstdlib>

using namespace std;

class QueueOverFlowException{
	public:
		QueueOverFlowException(){
			cout << "Queue overflow" << endl;
		}
};

class QueueEmptyException{
	public:
		QueueEmptyException(){
			cout << "Queue empty." << endl;
		}
};

class ArrayQueue{
	private:
		int data[MAX_SIZE];
		int front;
		int rear;
	public:
		ArrayQueue(){
			front = -1;
			rear = -1;
		}
		
		void Enqueue(int element){
			if(Size() == MAX_SIZE - 1){
				throw new QueueOverFlowException();
			}
			
			data[rear] = element;
			
			rear = ++rear % MAX_SIZE;
		}
		
		int Dequeue(){
			if(isEmpty()){
				throw new QueueEmptyException();
			}
			
			int ret = data[front];
			
			front = ++front % MAX_SIZE;
			
			return ret;
		}
		
		int Front(){
			if(isEmpty()){
				throw new QueueEmptyException();
			}
			
			return data[front];
		}
		
		int Size(){
			return abs(rear - front);
		}
		
		bool isEmpty(){
			return(front == rear) ? true : false;
		}
};

int main(){
	ArrayQueue t;
	
	try{
		if(t.isEmpty()){
			cout << "Queue is empty." << endl;
		}
		
		t.Enqueue(345);
		t.Enqueue(45);
		t.Enqueue(594);
		
		//print size of queue
		cout << "Size of queue = " << t.Size() << endl;
		
		//print front element
		cout << "Front element = " << t.Front() << endl;
		
		//print dequeue of elements
		cout << "Dequeue" << endl;
		cout << t.Dequeue() << endl;
		cout << t.Dequeue() << endl;
		cout << t.Dequeue() << endl;
		
	}catch(...){
		cout << "Some exception ocurred." << endl;
	}
}