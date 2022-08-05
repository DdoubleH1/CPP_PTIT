#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string a;
		cin >> a;
		int len = a.length();
		for(int i = 0; i< len; i++){
			if(a[i] == '0' && a[i+1] == '8' && a[i+2] == '4'){
				i+=2;
			}
			else cout << a[i];
		}
	cout << endl;
	}
}

