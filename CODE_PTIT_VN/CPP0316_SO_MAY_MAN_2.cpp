#include <bits/stdc++.h>
using namespace std;

bool checkLuckyNumber = false;

void sumNumber(string n){
	long long sum = 0;
	for(int i = 0; i < n.size(); i++){
		sum += n[i] - '0';
	}	
	if(sum > 9)
		sumNumber(to_string(sum));
	else if(sum == 9) checkLuckyNumber = true;
	else checkLuckyNumber = false;
}

int main(){
	int t; cin >> t; 
	while(t--){
		string n; cin >> n;
		sumNumber(n);
		if(checkLuckyNumber == true) cout << 1 << endl;
		else cout << 0 << endl;
		checkLuckyNumber = false;
	}
}