#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

bool increase(string s){
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] >= s[i+1])
			return false;	
	}
	return true;
}
bool equal(string s){
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] != s[i+1])
			return false;	
	}
	return true;
}
bool pair1(string s){
	if(s[0] != s[1] || s[1] != s[2] )
		return false;
	else if(s[3] != s[4])
		return false;
	return true;
}
bool dobOfHoang(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '6' && s[i] != '8')
			return false;	
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		string plate; cin >> plate;
		string s1;
		for(int i = 5; i < plate.size(); i++){
			if(plate[i] != '.')
				s1 += plate[i];
		}
////		cout << s1 << endl;
		if (s1[0] != s1[1] && increase(s1))
            cout << "YES\n";
        else if (equal(s1) || dobOfHoang(s1) || pair1(s1))
            cout << "YES\n";
        else
            cout << "NO\n";
	}
}