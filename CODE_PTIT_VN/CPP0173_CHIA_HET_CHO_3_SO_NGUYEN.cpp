#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll x, y, z, n;

void run_test_case(){
	cin >> x >> y >> z >> n;
    ll b1 = x * y / __gcd(x , y);
    ll b = b1 * z / __gcd(b1, z);

	db lower_bound = pow(10, n-1), upper_bound = pow(10, n);
    if(b > upper_bound){           
        cout << -1 << endl;
        return;
    }
    else{
        ll step = lower_bound / b;  
        if((ll)lower_bound % b != 0) step++;    
        cout << b*step << endl;    
        return;
    }
}

int main(){
	int t; cin >> t;
	while(t--){
		run_test_case();
	}
}