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
		vector<ll> res;
		for(int i = 0; i < n; i++){
			if(i == 0){
				res.push_back(a[i]*a[i+1]);
			}
			else if(i == n-1){
				res.push_back(a[i]*a[i-1]);
			}
			else res.push_back(a[i-1]*a[i+1]);
		}
		for(auto x: res){
			cout << x << " ";
		}
		cout << endl;
	}
}