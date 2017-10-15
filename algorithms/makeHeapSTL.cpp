//O(logn) time. 

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	
	vector<int> vi = {20, 34, 5, 7, 66, 8};
	
	int k = 2;
	
	make_heap(vi.begin(), vi.end());
	
	int a = 10;
	
	for(int i=0; i<k; i++){
		
		vi.push_back(a);
		push_heap(vi.begin(), vi.end());
		
		cout << "Maximum priority job: ";
		cout << vi.front() << endl;
		
		a = a + 10;
	}
}