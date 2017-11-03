
//import library

#include <bits/stdC++.h>
using namespace std;

int jumpSearchImplementation(int arr[], int x, int n){
	
	int step = sqrt(n);
	
	int prev = 0;
	
	while(arr[min(step, n)-1] < x){
		prev = step;
		step += sqrt(n);
		if(prev >= n){
			return -1;
		}
		
	}
	
	while(arr[prev] < x){
		prev++;
		
		if(prev == min(step, n)){
			return -1;
		}
	}
	
	if(arr[prev] == x){
		return prev;
	}
	
	return -1;
}

int main(){
	
	int arr[] = {4,5,6,9,9, 34,53,56,77,23,44,43};
	
	int x = 77;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int index = jumpSearchImplementation(arr, x, n);
	
	cout << "\nNumber #: " << x << " is at index " << index;
	
	return 0;
	
}
