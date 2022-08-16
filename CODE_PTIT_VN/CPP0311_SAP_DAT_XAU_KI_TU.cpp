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

string s;

int main(){
	int t; cin >> t;
	while(t--){
		// cin.ignore();
		cin >> s;
		int mark[1000] = {0}; int max = 0;
		int len_check = (s.length() % 2 == 0) ? s.length() : s.length()+1;
		for(int i = 0; i< s.size(); i++){
			mark[s[i]]++;
			if(max < mark[s[i]]) max = mark[s[i]];
		} 
		if(max > len_check/2) cout << 0 << endl;
		else cout << 1 << endl;
	}
}