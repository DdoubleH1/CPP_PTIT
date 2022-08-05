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

class complex
{
    public:
        int real, img;
};

void input(complex &a, complex &b)
{
    cin >> a.real >> a.img >> b.real >> b.img;
}

void output(complex &a, complex &b, complex &c, complex &d)
{
    complex sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    c.real = sum.real*a.real - sum.img*a.img;
    c.img = sum.real*a.img + sum.img*a.real;
    if(c.img >= 0)
    {
        cout << c.real << " + " << c.img << "i" << ", ";
    }
    else cout << c.real << " - " << abs(c.img) << "i" << ", ";

    d.real = sum.real*sum.real - sum.img*sum.img;
    d.img = sum.real*sum.img + sum.img*sum.real;
    if(d.img >= 0)
    {
        cout << d.real << " + " << d.img << "i" << endl;
    }
    else cout << d.real << " - " << abs(d.img) << "i" << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        complex a, b, c, d;
        input(a, b);
        output(a, b, c, d);
    }
}