#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		scanf("\n");
		string s1, s2;
		getline(cin , s1);
		getline(cin , s2);
		set<string> s;
		stringstream ss1(s1);
		string token;
		while(ss1 >> token){
			s.insert(token);
		}
		stringstream ss2(s2);
		while(ss2 >> token){
			s.erase(token);
		}
		for(auto x: s){
			cout << x << " ";
		}
		cout << endl;
	}
}