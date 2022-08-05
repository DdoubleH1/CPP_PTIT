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
	ll index;
	string id, name, clas, e_mail, com_name;
};

bool can_swap(data a, data b){
	return a.id < b.id;
}

void input_data(data stu[], int n){
	for(int i = 0; i< n; i++){
		scanf("\n");
		stu[i].index = i+1;
		getline(cin, stu[i].id);
		getline(cin, stu[i].name);
		getline(cin, stu[i].clas);
		getline(cin, stu[i].e_mail);
		getline(cin, stu[i].com_name);
	}
}

void output(string s, data stu[], int n){
	sort(stu, stu + n, can_swap);
	for(int j = 0; j< n; j++){
		if(s == stu[j].com_name){
			cout << stu[j].index << " " << stu[j].id << " " << stu[j].name << " " << stu[j].clas << " " << stu[j].e_mail << " " << stu[j].com_name << endl;
		}
	}
}

int main(){
	int n; cin >> n;
	data stu[n];
	input_data(stu, n);
	int a; cin >> a;
	while(a--){
		string s; cin >> s;
		output(s, stu, n);	
	}
}
//
