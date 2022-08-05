#include <iostream>
#include <math.h>
using namespace std;

int check_sphenic(int n){
	int res = 0; 		// bien dem so luong thua so
	for(int i = 2; i<= sqrt(n); i++){
		int count = 0;
		while( n % i == 0){
			count++;
			n /= i;
		}
		if(count >= 2) return 0;
		if(count == 1) res++;
	}
	if(n != 1) res++;
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check_sphenic(n) == 3) cout << 1 << endl;
		else cout << 0 << endl;	
	}
}