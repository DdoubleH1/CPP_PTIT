#include <iostream>
using namespace std;

int main(){
    long long a; cin >> a;
    long long res = 0, mul = 1;
    for(int i = 1; i<= a; i++){
        mul *= i;
        res += mul;
    }
    cout << res;
}
