#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void check(string s, int k){
	int mark[100000] = {0}, count = 0;
	for(int i = 0; i< s.size(); i++){
		mark[s[i]]++;
	}
	for(int i = 'a'; i<= 'z'; i++){
		if(mark[i] != 0){
			count++;
		}
	}
	int step = 'z' - 'a' + 1 - count;
	if(step <= k) cout << 1 << endl;
	else cout << 0 << endl;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		int k; cin >> k;
		check(s,k);
	}
}