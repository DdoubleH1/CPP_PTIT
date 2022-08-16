#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int main(){
	test(){
		int n; cin >> n;
		int a[n], b[n];
		for(int i = 0; i< n; i++){
			cin >> a[i];
		}
		for(int i = 0; i< n; i++){
			cin >> b[i];
		}
		int max = 0;
		for(int i = 0; i < n; i++){
			int sumA = 0, sumB = 0;
			int size = 0;
			for(int j = i; j <n; j++){
				sumA += a[j];
				sumB += b[j];
				if(sumA == sumB){
					size = j - i + 1;
				}
			}
			if(max < size) max = size;
		}
		cout << max << endl;
	}
}
