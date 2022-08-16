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


int main(){
	string s;
	ifstream fileIn {"PTIT.in"};
	ofstream fileOut {"PTIT.out"};
	if(fileIn && fileOut){
		while(getline(fileIn, s)){
			fileOut << s << "\n";
		}
	}
	fileIn.close();
	fileOut.close();
}