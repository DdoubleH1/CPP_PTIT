#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int rightSum = 0;
		int leftSum = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			rightSum += a[i];
		}
		leftSum = a[0];
		rightSum -= (a[0]+a[1]);
		int idx = 0;
		bool check = false;
		for(int i = 1; i < n; i++){
			if(leftSum == rightSum){
				idx = i+1;
				check = true;
				break;
			}
			else {
				leftSum += a[i];
				rightSum -= a[i+1];
			}
		}
		if(check == true)
			cout << idx << endl;
		else cout << -1 << endl;
	}
}
