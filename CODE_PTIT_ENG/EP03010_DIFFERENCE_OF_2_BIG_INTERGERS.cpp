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

void Sub(string a, string b){
	vector<int> ans;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	while(a.size() > b.size()) b.insert(b.end(), '0');
//	b.resize(a.size(), '0');
	int rem = 0;
	for(int i = 0; i < a.size(); i++){
		int num = a[i] - b[i] - rem;
		rem = 0;
		if(num >= 0){
			ans.push_back(num);
		}
		else{
			rem = 1;
			num += 10;
			ans.push_back(num);
		}
	}
	reverse(ans.begin(), ans.end());
	for(auto i: ans){
		cout << i;
	}
}

int main(){
	fastread();
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		if (a.size() < b.size())
            swap(a, b);
        if (a.size() == b.size() && a < b)
            swap(a, b);
		Sub(a,b);
		cout << endl;
	}
}