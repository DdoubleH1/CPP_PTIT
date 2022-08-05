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

struct data{
	string name, dob;
};

bool can_swap(data a, data b){
	if(a.dob.substr(6) < b.dob.substr(6)) return true;
	else if(a.dob.substr(6) == b.dob.substr(6) && a.dob.substr(3,2) < b.dob.substr(3,2)) return true;
	else if(a.dob.substr(6) == b.dob.substr(6) && a.dob.substr(3,2) == b.dob.substr(3,2) && a.dob.substr(0,2) < b.dob.substr(0,2)) return true;
	else return false;
}

void input(data lst[], int n){
	for(int i = 0; i< n ; i++){
		scanf("\n");
		cin >> lst[i].name >> lst[i].dob;
	}
}

void output(data lst[], int n){
	sort(lst, lst+n, can_swap);
	cout << lst[n-1].name << endl << lst[0].name;
}

int main(){
	int n; cin >> n;
	data lst[n];
	input(lst, n);
	output(lst, n);
}