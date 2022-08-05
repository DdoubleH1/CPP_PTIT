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
	ifstream file("DATA.in");
	int a[100000];
	int mark[100000] = {0};
	int i = 0;
	while(file >> a[i]){
		mark[a[i]]++;
		i++;
	}
	for(int i = 0; i< 100000; i++){
		if(mark[i] != 0){
			cout << i << " " << mark[i] << endl;
		}
	}
}