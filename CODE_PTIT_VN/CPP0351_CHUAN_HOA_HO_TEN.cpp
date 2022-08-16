#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

void lowerCase(string &name){
	for(int i = 0; i < name.size(); i++){
		if(name[i] >= 'A' && name[i] <= 'Z'){
			name[i] += 32;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int choice; cin >> choice;
		scanf("\n");
		string name; getline(cin, name);
		lowerCase(name);
		vector<string> res;
		if(choice == 1){
			stringstream ss(name);
			string token;
			while(ss >> token){
				token[0] -= 32;
				res.push_back(token);
			}
			cout << res[res.size()-1] << " ";
			for(int i = 0; i < res.size()-1; i++){
				cout << res[i] << " ";
			}
			cout << endl;
		}
		else {
			stringstream ss(name);
			string token;
			while(ss >> token){
				token[0] -= 32;
				res.push_back(token);
			}
			for(int i = 1; i < res.size(); i++){
				cout << res[i] << " ";
			}
			cout << res[0] << endl;
		}
	}
}