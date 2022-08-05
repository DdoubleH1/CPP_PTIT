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

struct Employee {
	string name, gen, dob, add, tax_num, con_date;
};

void input(Employee &a){
	getline(cin, a.name);
    getline(cin, a.gen);
    getline(cin, a.dob);
    getline(cin, a.add);
    getline(cin, a.tax_num);
    getline(cin, a.con_date);
}

void print(Employee &a){
	cout << "00001 " << a.name << " " << a.gen << " " << a.dob << " " << a.add << " " << a.tax_num << " " << a.con_date;
}

int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}