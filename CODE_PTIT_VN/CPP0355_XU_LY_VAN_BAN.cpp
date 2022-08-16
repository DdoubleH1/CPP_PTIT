#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)
	
int main(){
	string s;
	vector<string> tmp;
	vector< vector<string> > res;
	int flag = 1;	
	while(cin >> s){
		int len = s.size();
		for (int i = 0; i < len; i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        if(flag){
        	s[0] -= 32;
        	flag = 0;
		}
		if(s[len-1] != '.' && s[len-1] != '?' && s[len-1] != '!'){
			tmp.push_back(s);
		}
		else{
			s.erase(s.end()-1);
			tmp.push_back(s);
			res.push_back(tmp);
			flag = 1;
		} 	
	}
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j < res[i].size(); j++){
//			if(j == 0){
//				res[i][j][0] += 32;
//			}
			cout << res[i][j] << " ";
		}
//		cout << endl;
	}
	
}