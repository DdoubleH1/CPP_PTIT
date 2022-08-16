#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = n-1; i >= n-k; i--){
        	cout << a[i] << " ";
		}
		cout << endl;
    }
}