#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
#define pb push_back
#define test() int t; cin >> t; while(t--)

bool cmp(int a, int b){
	return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

int main(){
	test(){
		int n; cin >> n;
		int a[n];
		vector<int> res;
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
			res.pb(a[i]);
		}
		sort(res.begin(), res.end(), cmp);
		for(auto x: res){
			cout << x;
		}
		cout << endl;
	}
}
