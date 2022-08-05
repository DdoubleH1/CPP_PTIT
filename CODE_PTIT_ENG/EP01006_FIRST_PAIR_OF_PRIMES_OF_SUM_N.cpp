#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
typedef long long ll;

int checkPrime(int n){
	if(n < 2) return 0;
	else if(n == 2 || n ==3) return 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, num2; cin >> n;
		int check = 0;
		for(int i = 2; i<= sqrt(n) +100; i++){
			if(checkPrime(i) == 1){
				num2 = n - i;
				if(checkPrime(num2) == 1){
					cout << i << " " << num2 << endl;
					check = 1;
					break;
				}
			}
		}
		// if(check == 0) cout << -1 << endl;
	}
}





//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int check(int n) {
//	int count=0;
//	for(int i=2;i<=sqrt(n);i++) {
//		if(n%i==0) {
//			count++;
//		}
//	}
//	if(count!=0 || n<2) {
//		return 0;
//	}	else return 1;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while(t--) {
//		int n,sohai;
//		int dem = 0;
//		cin >> n;
//		for(int i=2;i<=sqrt(n)+100;i++) {
//			if(check(i)==1) {
//				sohai=n-i;
//				if(check(sohai)==1) {
//					cout << i << " " << sohai << endl;
//					dem++;
//					break;
//				}
//			}	else if(i>=n) {
//				break;
//			}
//		}
//		if(dem==0) {
//			cout << "-1" << endl;
//		}
//	}
//}
