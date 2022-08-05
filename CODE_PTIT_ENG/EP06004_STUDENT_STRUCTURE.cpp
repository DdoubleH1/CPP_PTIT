#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <set>
#include <fstream>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct Student{
	string name, clas, dob;
	float gpa;
};

void input (Student &a){
	getline(cin, a.name);
	getline(cin, a.clas);
	getline (cin, a.dob);
	cin >> a.gpa;
}

void print(Student &a){
	cout << "B20DCCN001" << " " << a.name << " " << a.clas << " " << " ";
	if(a.dob[2] != '/'){
		a.dob.insert(0, "0");
	}
	if(a.dob[5] != '/'){
		a.dob.insert(3, "0");
	}
	cout << a.dob << " ";
	cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}