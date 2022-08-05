#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <fstream>
#include <climits>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));


bool check(string s){
	if(s.size() > 9) return false;
	for(int i = 0; i< s.size(); i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}

int main(){
	ifstream file ("DATA.in");
	string s;
	long long sum = 0;
	while(file >> s){
		if(check(s) && stoi(s) <= INT_MAX){
			sum += stoi(s);
		}
	}
	cout << sum << endl;
}