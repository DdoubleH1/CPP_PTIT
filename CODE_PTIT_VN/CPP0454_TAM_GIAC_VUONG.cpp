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
		vector <long long> py;
		for(int i = 0; i < n ;i++){
			cin >> a[i];
			py.push_back(a[i]*a[i]);
		}
		sort(py.begin(), py.end());
		int flag = 0;
		int idx1, idx2, idx3;
		for(int i = 0; i < n-2; i++){
			int j = i+1, k = n-1;
			while(j<k){
				if((py[i] + py[j]) == py[k]){
//					idx1 = i, idx2 = j, idx3 = k;
					flag = 1;
					break;
				}
//				else if(py[i] + py[j] > py[k]){
					k--;
//				}
//				else {
//					j++;
//				}
			}
			if(flag == 1) break;
		}
//		cout << flag << endl;
		if(flag == 1){
			cout << "YES" << endl;
//			cout << py[idx1] << " " << py[idx2] << " " << py[idx3] << endl;
		}
		else cout << "NO" << endl;
	}
}