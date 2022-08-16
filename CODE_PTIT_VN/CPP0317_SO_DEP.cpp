#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

bool check(string s){
	int len = s.size();
	for(int i = 0; i <= len/2; i++){
		if((s[i]-'0') % 2 != 0) return false;
		if(s[i] != s[len-i-1]) return false;
	}
	return true;
}

int main(){
	test(){
		scanf("\n");
		string s; cin >> s;
		if(check(s) == true)
			cout << "YES\n";
		else cout << "NO\n";
	}
}

