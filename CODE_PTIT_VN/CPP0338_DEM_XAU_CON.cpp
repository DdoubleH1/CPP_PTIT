#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		int count = 0;
		for(int i = 0; i < s.size(); i++){
			map<char, int> res;
			for(int j = i; j < s.size(); j++){
				res[s[j]]++;
				if(res.size() == k)
					count++;
				else if(res.size() > k)
					break;
			}
		}
		cout << count << endl;
	}
}