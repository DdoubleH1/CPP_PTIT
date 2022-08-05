#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <fstream>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void lwr(string &s){
	int len = s.size();
	for(int i = 0; i< len; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32; 
		}
	}
}

int main(){
	fastread();
	ifstream f1 ("DATA1.in");
	ifstream f2 ("DATA2.in");
	set<string> data1, data2;
	set<string> s1, s2; 
	string s;
	while(f1 >> s){
		lwr(s);
		data1.insert(s);
		s1.insert(s);
	}
	while(f2 >> s){
		lwr(s);
		data2.insert(s);
		s2.insert(s);
	}
	for(string i: s1){
		if(data2.erase(i) == NULL){
			cout << i << " ";
		}
	}
	cout << endl;
	for(string i: s2){
		if(data1.erase(i) == NULL){
			cout << i << " ";
		}
	}
}
	