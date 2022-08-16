#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int n; cin >> n;
		int a[n][n];
		int sum = 0;
		int maxSum = 0;
		int sumRow, sumColumn;
		for(int i = 0; i < n; i++){
			sumRow = 0;
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				sum += a[i][j];
				sumRow += a[i][j];
			}
			if(sumRow > maxSum) maxSum = sumRow; 
		}
		
		for(int j = 0; j < n; j++){
			sumColumn = 0;
			for(int i = 0; i < n; i++){
				sumColumn += a[i][j];
			}
			if(sumColumn > maxSum) maxSum = sumColumn;
		}
		cout << maxSum*n - sum << endl;
	}
}