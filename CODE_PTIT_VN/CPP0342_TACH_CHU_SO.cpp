#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		multiset<char> resC;
		int num = 0;
		for(int i = 0 ; i < s.size(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				resC.insert(s[i]);
			}
			else num += s[i] - '0';
		}
		for(auto x: resC){
			cout << x;
		}
		cout << num << endl;
	}
}