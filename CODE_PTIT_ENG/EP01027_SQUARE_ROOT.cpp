#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		double n; cin >> n;
		double sum = 0;
		for(int i = 1 ;i <= n ;i ++){
			sum += i;
			sum = sqrt(sum);
		}
		printf("%.5lf\n", sum);
	}
}
