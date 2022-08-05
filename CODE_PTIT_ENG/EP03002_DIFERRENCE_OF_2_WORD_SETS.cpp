#include <iostream>
#include <set>
#include <vector>
#include <sstream>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		multiset<string> ans;
		string token;
		stringstream ss1(s1);
		while(ss1 >> token){
			ans.insert(token);
		}
		stringstream ss2(s2);
		while(ss2 >> token){
			ans.erase(token);
		}
		for(auto x: ans){
			cout << x << " ";
		}
		cout << endl;
	}
}