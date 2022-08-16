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
		int res;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		bool check = false;
		for(int i = 0; i < n; i++){
			mp[a[i]]++;
			if(mp[a[i]] > 1){
				check = true;
				cout << a[i] << endl;
				break;
			}
		}
		if(check == false)
			cout << -1 << endl;
	}
}