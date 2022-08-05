#include <iostream>
using namespace std;
typedef long long ll;

int main(){
	int k; cin >> k;
	int count = 0, i = 0;
	while(count < k){
		i++;
		if(i % 3 != 0 && i % 10 != 3){
			count++;
		}
	}
	cout << i ;
}