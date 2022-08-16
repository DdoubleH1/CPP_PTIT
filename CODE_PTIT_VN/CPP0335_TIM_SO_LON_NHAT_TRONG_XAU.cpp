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
		set<long long> res;
		for(int i = 0; i < s.size(); i++){
			string number;
			if(s[i] >= '0' && s[i] <= '9'){
				while(s[i] >= '0' && s[i] <= '9'){
					number += s[i];
					i++;
				}
//				cout << number << endl;
				long long num = stoll(number);
				res.insert(num);
			}
		}
		cout << *res.rbegin() << endl;
	}
}