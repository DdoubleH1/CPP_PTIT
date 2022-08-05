#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

class student{
    public:
        string name, clas, dob;
        db gpa;
};

void input(student &a){
    getline(cin, a.name);
    getline(cin, a.clas);
    getline(cin, a.dob);
    cin >> a.gpa;
}

void output(student &a){
    if(a.dob[2] != '/') a.dob.insert(0, "0");
    if(a.dob[5] != '/') a.dob.insert(3, "0");
    cout << "B20DCCN001 " << a.name << " " << a.clas << " " << a.dob << " " << fixed << setprecision(2) << a.gpa; 
}

int main(){
    student a;
    input(a);
    output(a);
}