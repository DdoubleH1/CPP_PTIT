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
	ifstream f1("DATA1.in");
	ifstream f2("DATA2.in");
	set<string> uni , inter, dupli;
	string s;
	while(!f1.eof()){
		f1 >> s;
		lwr(s);
		uni.insert(s); 
		dupli.insert(s);
	}
	while(!f2.eof()){
		f2 >> s;
		lwr(s);
		uni.insert(s);
		if(dupli.erase(s) != NULL){
			inter.insert(s);
		}
	}
	for(auto i: uni){
		cout << i << " ";
	}
	cout << endl;
	for(auto i: inter){
		cout << i << " "; 
	}
}