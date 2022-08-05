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
		cin.ignore();
		string n; cin >> n;
		int max  =0, index1 = 0, index2 = 0;
		int check = 0;
		for(int i = 0; i< n.size()-1; i++){
			// tìm vị trí cuối cùng mà phần tử đứng trước lớn hơn phần tử đứng sau
			if (n[i] > n[i+1]){
				check = 1;
				index1 = i;
			}
		}
		if(check == 0) cout << -1 << endl;
		else{
			for(int i = index1+1; i< n.size(); i++){
				if(max < n[i] && n[i] < n[index1]){
					max = n[i];
					index2= i;
				}
			}
			swap(n[index1], n[index2]);
			cout << n << endl;
		}
	}
}
