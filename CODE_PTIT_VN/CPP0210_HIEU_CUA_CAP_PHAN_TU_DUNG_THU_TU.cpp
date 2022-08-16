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
		int max = 0;
		bool check = false;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(a[j] > a[i]){
					check = true;
					if(a[j] - a[i] > max)
						max = a[j]-a[i];
				}
			}
		}
		if(check == true) 
			cout << max << endl;
		else cout << -1 << endl;
	}
}