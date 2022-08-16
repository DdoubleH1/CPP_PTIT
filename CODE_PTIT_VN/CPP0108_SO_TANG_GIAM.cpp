#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

bool checkPrime(long long n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0 && n > 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

bool checkIncrease(int a){
	int tmp1 = a % 10;
	a /= 10;
	while(a > 0){
		int tmp2 = a % 10;
		if(tmp2 >= tmp1) return false;
		tmp1 = tmp2;
		a /= 10;
	}
	return true;
}

bool checkDecrease(int a){
	int tmp1 = a % 10;
	a /= 10;
	while(a > 0){
		int tmp2 = a % 10;
		if(tmp2 <= tmp1) return false;
		tmp1 = tmp2;
		a /= 10;
	}
	return true;
}

int main(){
	test(){
		int n; cin >> n;
		int count = 0;
		for(auto i = pow(10, n-1); i < pow(10,n); i++){
			if(checkIncrease(i) == true || checkDecrease(i) == true){
				if(checkPrime(i) == true)
					count++;
			}
		}
		cout << count << endl;
	}
}