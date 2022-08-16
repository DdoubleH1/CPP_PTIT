#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		vector<string> res;
		scanf("\n");
		string s; getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			res.push_back(tmp);
		}
		for(int i = res.size()-1; i >= 0; i--){
			cout << res[i] << " ";
		}
		cout << endl;
	}
}