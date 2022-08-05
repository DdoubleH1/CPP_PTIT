#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		int count = 0;
		int i = 9;
		while(n != 0){
			if(n >= a[i]){
				count++;
				n -= a[i];
			}
			else i--;
		}
		cout << count << endl;
	}
}
