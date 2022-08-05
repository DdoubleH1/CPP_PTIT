#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
typedef long double ldb;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

class point{
	public:
		ldb x, y;
};

class triangle{
	public:
		point a, b, c;
};

bool check_triangle(ldb a, ldb b, ldb c){
	if(a+b > c && a+c > b && b+c > a){
		return true;
	}
	return false;
}



void output(triangle &s){
	cin >> s.a.x >> s.a.y >> s.b.x >> s.b.y >> s.c.x >> s.c.y;
	ldb ab = sqrt((s.a.x - s.b.x)*(s.a.x - s.b.x) + (s.a.y - s.b.y)*(s.a.y - s.b.y));
	ldb ac = sqrt((s.a.x - s.c.x)*(s.a.x - s.c.x) + (s.a.y - s.c.y)*(s.a.y - s.c.y));
	ldb bc = sqrt((s.c.x - s.b.x)*(s.c.x - s.b.x) + (s.c.y - s.b.y)*(s.c.y - s.b.y));
	if(check_triangle(ab, ac, bc) == false) cout << "INVALID" << endl;
	else{
		cout << fixed << setprecision(2)<< sqrt((ab + ac + bc)*(ab + ac - bc)*(ac + bc - ab)*(ab + bc - ac))/4 << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		triangle s;
		output(s);
	}
}