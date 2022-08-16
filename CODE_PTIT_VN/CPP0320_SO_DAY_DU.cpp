#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		set<int> res;
		int check = 1;
		if(s[0] == '0'){
			cout << "INVALID" << endl;
			continue;
		}
		for(int i = 0; i < s.size(); i++){
			if(s[i] < '0' || s[i] > '9'){
				cout << "INVALID" << endl;
				check = 0;
				break;
			}	
			else {
				int num = s[i] - '0';
				res.insert(num);
			}
		}
		if(check == 0)
			continue;
		int sumRes = 0;
		for(auto x: res){
			sumRes += x;
		}
		if(sumRes == 45) cout << "YES" << endl;
		else cout << "NO" << endl;
	} 
}