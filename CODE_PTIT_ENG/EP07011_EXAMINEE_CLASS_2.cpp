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

class examinee{
    public:
        string id, name;
        db math, physic, chem, total;
};

void input(examinee &a){
    getline(cin, a.id);
    getline(cin, a.name);
    cin >> a.math >> a.physic >> a.chem;
    a.total = a.math*2 + a.physic + a.chem;
}

void output(examinee &a){
    if(a.id[2] == '1'){
        cout << a.id << " " << a.name << " " << 0.5 << " ";
        printf("%g", a.total);
        if(a.total + 0.5 >= 24) cout << " TRUNG TUYEN";
        else cout << " TRUOT";
    }
    else if(a.id[2] == '2'){
        cout << a.id << " " << a.name << " " << 1 << " ";
        printf("%g", a.total);
        if(a.total + 1.0 >= 24) cout << " TRUNG TUYEN";
        else cout << " TRUOT";
    }
    else if(a.id[2] == '3'){
        cout << a.id << " " << a.name << " " << 2.5 << " ";
        
        if(a.total + 2.5 >= 24) cout << " TRUNG TUYEN";
        else cout << " TRUOT";
    }
}

int main(){
    examinee a;
    input(a);
    output(a);
}