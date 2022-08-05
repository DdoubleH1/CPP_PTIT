#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int sum = 0;
		for(int i = 1; i<= n; i++){
			sum += i;
		}
		if(sum == k) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
