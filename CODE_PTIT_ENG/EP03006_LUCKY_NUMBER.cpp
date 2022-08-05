#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void run_test_case (string n){
	ll sum = 0;
	for(int i = 0; i< n.length(); i++){
		sum += n[i] - '0';
	}
	if(sum > 9){
		string a = to_string(sum);
		return run_test_case(a);	
	}
	else{
		if(sum == 9) cout << 1 << endl;
		else cout << 0 << endl;
	}
	
}

int main(){
	int t; cin >> t;
	while(t--){
		string n;
		cin >> n;
		run_test_case(n);
	}
}