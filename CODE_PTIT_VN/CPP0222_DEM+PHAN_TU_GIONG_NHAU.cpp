#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int main(){
	test(){
		map<int, int> mp;
		int n; cin >> n;
		int a[n][n];
		set<int> s;
		for(int i = 0; i <n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				s.insert(a[i][j]);
			}
			for(auto x: s){
				mp[x]++;
			}
			s.clear();
		}
		int count = 0;
		for(auto x: mp){
			if(x.second >= n)
				count++;
		}
		cout << count << endl;
	}
}