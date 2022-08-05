#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for( int i = 0; i < n; i++){
			cin >> a[i];
		}
		int max = 0, res = 0, check = 0;
		for(int i = 0; i< n-1; i++){
			for(int j = i+1; j< n; j++){
				if(a[i] < a[j]){
					check = 1;
					res = a[j] - a[i];
					if(res > max) max = res;
				}
			}
		}
		if(check == 1) cout << max << endl;
		else cout << -1 << endl;
	}
}
