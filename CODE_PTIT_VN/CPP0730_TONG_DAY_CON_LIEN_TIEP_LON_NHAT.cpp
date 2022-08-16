#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long maxSum = a[0];
		long long sum = 0;
		for(int i = 0; i < n; i++){
			sum += a[i];
			maxSum = max(sum, maxSum);
			if(sum < 0) sum = 0;
		}
		cout << maxSum << endl;
	}
}