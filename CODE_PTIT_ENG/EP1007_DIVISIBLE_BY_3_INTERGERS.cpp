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
    // tìm bội chung nhỏ nhất của 3 số x y z
    ll b1 = x * y / __gcd(x , y);
    ll b = b1 * z / __gcd(b1, z);

	db lower_bound = pow(10, n-1), upper_bound = pow(10, n); // cận trên và cận dưới của số phải tìm có n chữ số
    if(b > upper_bound){            // nếu bcnn lớn hơn cận trên thì k tìm đc số thỏa mãn
        cout << -1 << endl;
        return;
    }
    else{
        ll step = lower_bound / b;  // step là số phải nhân với bcnn để có được số cần tìm
        if((ll)lower_bound % b != 0) step++;    // có trường hợp cận dưới k chia hết cho bcnn nên dẫn đến việc biến step làm tròn xuống và phải ++step để có được số cần tìm
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