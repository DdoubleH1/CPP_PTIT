#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <fstream>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool check(string s){
	if(s.size() > 9) return false;
	for(int i = 0; i< s.size(); i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}

int main(){
	ifstream file ("DATA.in");
	string s;
	multiset<string> ans;
	while(file >> s){
		if(!check(s)){
			ans.insert(s);
		}
	}
	for(auto i: ans){
		cout << i << " ";
	}
}