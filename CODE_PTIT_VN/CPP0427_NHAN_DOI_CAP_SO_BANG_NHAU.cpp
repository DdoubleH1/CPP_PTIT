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
		vector<int> valid;
		vector<int> invalid;
		for(int i = 0; i < n-1; i++){
			if(a[i+1] != 0 && a[i] == a[i+1]){
				a[i] *= 2;
				a[i+1] = 0;
			}
		}
		for(auto x: a){
			if(x != 0)
				valid.push_back(x);
			else 
				invalid.push_back(x);
		}
		for(auto x: valid){
			cout << x << " ";
		}
		for(auto y: invalid){
			cout << y << " ";
		}
		cout << endl;
	}
}