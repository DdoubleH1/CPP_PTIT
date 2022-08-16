#include<bits/stdc++.h>
using namespace std;

#define test() int t; cin >> t; while(t--)

int main(){
	test(){
		int n; cin >> n;
		int a[n];
		vector<int> b;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b.push_back(a[i]);
		}
		stable_sort(b.begin(), b.end());
		int l, r;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				l = i+1;
				break;
			}
		}
		for(int i = n-1; i >= 0; i--){
			if(a[i] != b[i]){
				r = i+1;
				break;
			}
		}
		cout << l << " " << r << endl;
	}
}