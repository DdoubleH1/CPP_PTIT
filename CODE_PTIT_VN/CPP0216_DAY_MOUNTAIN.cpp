#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0 ;i< n; i++){
			cin >> a[i];
		}
		int l, r; cin >> l >> r;
		int max = 0, index = 0;
		for(int i = l; i<= r; i++){
			if(a[i] > max){
				max = a[i];
				index = i;
			}
		}
		int check1 = 1, check2 = 1;
		for(int i = l; i< index; i++){
			if(a[i+1] <= a[i]){
				check1 = 0;
				break;
			}
		}
		if(check1 == 0) cout << "No" << endl;
		else {
			for(int i = index; i< r; i++){
				if(a[i+1] >= a[i]){
					check2 = 0;
					break;
				}
			}
			if(check2 == 0) cout << "No" << endl;
			else cout << "Yes" << endl;
		}
	}
}
