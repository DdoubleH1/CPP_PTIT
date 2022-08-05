#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <stdio.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct data{
	db s1, s2, s3;
	string name, clas, id;
};

bool comp(data a, data b){
	return a.name < b.name;
}

void input(vector<data> &lst, int n){
	for(int i = 0; i< n; i++){
		scanf("\n");
		getline(cin, lst[i].id);
		getline(cin, lst[i].name);
		getline(cin, lst[i].clas);
		cin >> lst[i].s1 >> lst[i].s2 >> lst[i].s3;
	}
}

void solve(vector<data> &lst){
	sort(lst.begin(), lst.end(), comp);
}

void print(vector<data> &lst, int n){
	solve(lst);
	for(int i = 0; i< n; i++){
		cout << i+1 << " "  << lst[i].id << " " << lst[i].name << " " << lst[i].clas << " ";
		cout << fixed << setprecision(1) << lst[i].s1 << " " << lst[i].s2 << " " << lst[i].s3 << endl;
	}
}

int main(){
	int n; cin >> n;
	vector <data> lst(n);
	input(lst, n);
	print(lst, n);
}