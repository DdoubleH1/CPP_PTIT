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

struct Examinee{
	string name, dob;
	float a, b, c;
};

void input(Examinee &A){
	getline(cin, A.name);
	getline(cin, A.dob);
	cin >> A.a >> A.b >> A.c;
}

void print(Examinee &A){
	cout << A.name << " " << A.dob << " ";
	cout << fixed << setprecision(1) << A.a + A.b + A.c;
}

int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}