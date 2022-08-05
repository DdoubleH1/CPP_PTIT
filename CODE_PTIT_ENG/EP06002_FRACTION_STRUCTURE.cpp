#include <iostream>
#include <algorithm>
using namespace std;
struct Fraction
{
    long long tu, mau;
};
void input(Fraction &p)
{
    cin >> p.tu;
    cin >> p.mau;
}
void simplify(Fraction &p)
{
    long long ucln = __gcd(p.mau, p.tu);
    p.mau /= ucln;
    p.tu /= ucln;
}
void print(Fraction &p)
{
    cout << p.tu << "/" << p.mau << endl;
}
int main()
{
    struct Fraction p;
    input(p);
    simplify(p);
    print(p);
    return 0;
}