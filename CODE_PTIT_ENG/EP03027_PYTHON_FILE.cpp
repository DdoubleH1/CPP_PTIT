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
	fastread();
	string file;
	cin >> file;
	int check = 0;
	for(int i = 0; i< file.length(); i++){
		if(file[i] == '.' && (file[i+1] == 'p' || file[i+1] == 'P') && (file[i+2] == 'y' || file[i+2] == 'Y')){
//			cout << "yes";
			check = 1;
			break;
		}
	}
	if(check == 1) cout << "yes";
	else cout << "no";
}