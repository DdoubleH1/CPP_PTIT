#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(string s){
	int a[10000] = {0};
	for(int i = 0; i< s.length(); i++){
		a[s[i]]++;
	}
	for(int i = 0; i< s.length(); i++){
		if(a[s[i]] == 1) cout << s[i];
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >>s;
		solve(s);	
	}
}
