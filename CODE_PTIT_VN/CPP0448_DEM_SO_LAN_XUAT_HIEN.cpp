#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define test()    int t; cin >> t; while (t--)

int main(){
	test(){
		int n, x; cin >> n >> x;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		if(mp[x] != 0)
			cout << mp[x] << endl;
		else cout << -1 << endl;
	}
}