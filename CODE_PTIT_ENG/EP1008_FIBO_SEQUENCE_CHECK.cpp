#include <iostream>
using namespace std;

int checkFibo(long long n){
	long long a1= 0 , a2=1;
	long long a = a1 + a2;
	  	while(a < n){
	  		a1 = a2;
	  		a2 = a;	
	   		a = a1 + a2;
	    }
	if(n == a || n == 0) return 1;
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n];
		for(int i = 0; i< n; i++){
			cin >> a[i];
		}
		for(int  i = 0; i< n; i++){
			if(checkFibo(a[i]) == 1) cout << a[i] << " ";
		}
		cout << endl;
	}
}
