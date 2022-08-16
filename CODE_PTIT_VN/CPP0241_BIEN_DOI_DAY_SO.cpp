#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int left = 0, right = n-1, count = 0;
		while(left <= right){
			if(a[left] == a[right]){
				left++; right--;
			}
			else if (a[left] < a[right]){
				left++;
				a[left] += a[left-1];
				count++;
			}
			else{
				right--;
				a[right] += a[right+1];
				count++;
			}
		}
		cout << count << endl;
	}
}