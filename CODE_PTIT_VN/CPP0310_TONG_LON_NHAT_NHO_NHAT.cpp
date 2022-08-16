#include <bits/stdc++.h>
using namespace std;


void minSum(string a, string b){
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '6')
			a[i] = '5';
	}
	for(int i = 0; i < b.size(); i++){
		if(b[i] == '6')
			b[i] = '5';
	}
	long long res = stoll(a) + stoll(b);
	cout << res << " ";
}


void maxSum(string a, string b){
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '5')
			a[i] = '6';
	}
	for(int i = 0; i < b.size(); i++){
		if(b[i] == '5')
			b[i] = '6';
	}
	long long res = stoll(a) + stoll(b);
	cout << res << endl;
}


int main(){
	int t; cin >> t;
	while(t--){
		string x1, x2;
		cin >> x1 >> x2;
		minSum(x1, x2);
		maxSum(x1, x2);
	}
}