#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int main(){
	test(){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i]; 	
	    }	
	    prev_permutation(a, a+n);
	    for(int i = 0; i < n; i++){
			cout << a[i] << " "; 	
	    }
	    cout << endl;
	}
}