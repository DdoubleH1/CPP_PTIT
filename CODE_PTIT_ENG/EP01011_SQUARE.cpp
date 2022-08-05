#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
typedef long long ll;

int checkSquareNum(int n){
    int x = (int) sqrt(n);
    if(x*x == n) return 1;
    return 0;
}

int main(){
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for(int i = a; i<= b; i++){
		if(checkSquareNum(i)) sum += i;
	}
	cout << sum;
}
