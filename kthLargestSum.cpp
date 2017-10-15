int kthLargestSum(int arr[], int n, int k){
	
	//array to store predix sums
	int sum[n+1];
	sum[0] = 0;
	sum[1] = arr[0];
	
	for(int i = 2; i<=n;i++){
		sum[i] = sum[i-1]+arr[i-1];
	}
	//min heap
	priority_queue<int, vector<int>, greated<int> > Q;
	
	
	//loop to find contigous subarray
	for(int i = 1; i<=n; i++){
		
		//traverse all positions
		for(int j=i; j<=n; i++){
			
			int x = sum[j] - sum[i - 1];
			
			if(Q.size() < k){
				Q.push(x);
			}else{
				if(Q.top() < x){
					Q.pop();
					Q.push(x);
				}
			}
		}
	}
	return Q.top();
}

int main(){
	
	int a[] = {10, -20, 14, -60};
	int n = sizeof(a) / sizeof(a[0]);
	int x = 6;
	
	cout << kthLargestSum(a, n, k);
	return 0;
}