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


void minimum(int m, int s){
	vector<int> a(m);
	s -= 1;
	for(int i = m-1; i >= 0; i--){
		if(s > 9){
			a[i] = 9;
			s -= 9;
		}
		else{
			a[i] = s;
			s = 0;
		}
	}
	a[0] += 1;
	for(int i = 0; i< m; i++){
		cout << a[i];
	}
}

void maximum(int m, int s){
	vector<int> a(m);
	for(int i = 0; i< m; i++){
		if(s > 9){
			a[i] = 9;
			s -= 9;
		}
		else{
			a[i] = s;
			s = 0;
		}
	}
	for(int i = 0; i< m; i++){
		cout << a[i];
	}
}

int main(){
	int m, s; cin >> m >> s;
	if(s > 9*m || s == 0) cout << "-1 -1";
	else{
		minimum(m,s);
		cout << " ";
		maximum(m,s);
	}
}