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

struct Employee {
	string name, gen, dob, add, tax_num, con_date, id;
};

void input(Employee &lst){
	scanf("\n");
	getline(cin, lst.name);
    getline(cin, lst.gen);
    getline(cin, lst.dob);
    getline(cin, lst.add);
    getline(cin, lst.tax_num);
    getline(cin, lst.con_date);
}

void printlist(Employee lst[], int n){
	for(int i = 0; i< n; i++){
		if(i < 9) cout <<"0000" << i+1 << " ";
		else if(i >= 9 && i < 99) cout <<"000" << i+1 << " ";
		else if(i >= 99 && i < 999) cout <<"00" << i+1 << " ";
		else if(i >= 999 && i < 9999) cout <<"0" << i+1 << " ";
		else if(i >= 9999 && i < 99999) cout << i+1 << " ";
		cout <<  lst[i].name << " " << lst[i].gen << " " << lst[i].dob << " " << lst[i].add << " " << lst[i].tax_num << " " << lst[i].con_date << endl;
	}
}

int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}