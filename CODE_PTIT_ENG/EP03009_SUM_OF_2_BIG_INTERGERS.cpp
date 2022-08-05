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

string Add(string a, string b){
	string ans = "";
	while(a.size() < b.size()) a.insert(0, "0");
	while(a.size() > b.size()) b.insert(0, "0");
	int len = a.size() - 1;
	int rem = 0;
	for(int i = len; i >= 0; i--){
		int num = a[i] - '0' + b[i] - '0' + rem;
		ans.insert(0, to_string(num % 10));
		rem = num/10;
	}
	if(rem > 0) ans.insert(0, "1");
	return ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << Add(a,b) << endl;
	}
}
