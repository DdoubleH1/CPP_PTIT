#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		while(a % 2 == 0 || a % 3 == 0){
			if(a % 2 == 0) a /= 2;
			else if(a % 3 == 0) a/= 3;
		}
		while(b % 2 == 0 || b % 3 == 0){
		if(b % 2 == 0) b /= 2;
		else if(b % 3 == 0) b/= 3;
		}
		if(a == b) cout << "YES\n";
		else cout << "NO\n";
	}
}
