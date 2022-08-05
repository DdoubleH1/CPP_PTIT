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

class examinee
{
    public:
        string name, dob;
        float s1, s2, s3, ss;
};

void input(examinee &a)
{
    getline(cin, a.name);
    getline(cin, a.dob);
    cin >> a.s1 >> a.s2 >> a.s3;
    a.ss = a.s1 + a.s2 + a.s3;
}

void output(examinee &a)
{
    cout << a.name << " " << a.dob << " " << fixed << setprecision(1) << a.ss;
}

int main()
{
    examinee a;
    input(a);
    output(a);
}