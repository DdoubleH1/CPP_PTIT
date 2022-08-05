#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//int main(){
//	int t; cin >> t;
//	while(t--){
//		int n, m; cin >> n >> m;
//		int a[n], b[m], luu[1000000] = {0};
//		for(int i=0;i<n;i++) {
//			cin >> a[i];
//			luu[a[i]]++;
//		}
//		for(int i=0;i<m;i++) {
//			cin >> b[i];
//			while(luu[b[i]]!=0) {
//				cout << b[i] << " ";
//				luu[b[i]]--;
//			}
//		}
//		long long dem=0;
//		for(int i=0;i<n;i++) {
//			while(luu[a[i]]!=0) {
//				sx[dem]=a[i];
//				dem++;
//				luu[a[i]]--;
//			}
//		}
//		sort(sx,sx+dem);
//		for(int i=0;i<dem;i++) {
//			cout << sx[i] << " ";
//		}
//		cout << endl;
//	}
//}
//	
//	}
//}


int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >>n >> m;
		int mark[100000] = {0};
		vector<int> a1(n), a2(m);
		for(int i = 0; i< n; i++){
			cin >> a1[i];
			mark[a1[i]]++;
		}
		sort(a1.begin(), a1.end());
		for(int i = 0; i< m; i++){
			cin >> a2[i];
		}
		for(int i = 0; i< m; i++){
			while(mark[a2[i]] != 0){
				cout << a2[i] << " ";
				mark[a2[i]]--;
			}
		}
		for(int i = 0; i< n; i++){
			if(mark[a1[i]] != 0){
				cout << a1[i] << " ";
			}
		}
		cout<< endl;
	}
}


