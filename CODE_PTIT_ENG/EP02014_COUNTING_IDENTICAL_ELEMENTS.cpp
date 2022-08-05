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


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		int mark[100005] = {0};
		set<int> s; // set chứa những phần tử khác nhau 
		for(int i = 0; i< n; i++){
			for(int j = 0; j< n; j++){
				cin >> a[i][j];
				s.insert(a[i][j]);
			}
			for(auto x: s){
				mark[x]++;
			}
			s.clear();
		}
	
		int count = 0;
		for(int i = 0; i< 100005; i++){
			if(mark[i] >= n) count++;
		}
		cout << count << endl;
	}
}
