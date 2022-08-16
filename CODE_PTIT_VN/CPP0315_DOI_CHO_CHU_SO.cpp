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
		string sTemp = s;
		int idx1 = 0, idx2 = 0;
		for(int i = 1; i < s.size(); i++){
			if(s[i-1] > s[i])
				idx1 = i-1;
		}
		int max = 0;
		for(int i = idx1; i < s.size(); i++){
			if(s[i] > max && s[i] < s[idx1]){
				max = s[i];
				idx2 = i;
			}
		}
		char temp = s[idx1];
		s[idx1] = s[idx2];
		s[idx2] = temp;
		if(s != sTemp)
			cout << s << endl;
		else cout << -1 << endl;
	}
}