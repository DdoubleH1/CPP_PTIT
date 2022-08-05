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

class point{
	public:
		db x, y;
};

void input(point &a, point &b, point &c){
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
}

bool check_triangle(db a, db b, db c){
	if(a+b > c && a+c > b && b+c > a){
		return true;
	}
	return false;
}

void output(point &a, point &b, point &c){
	db ab = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
	db ac = sqrt((a.x - c.x)*(a.x - c.x) + (a.y - c.y)*(a.y - c.y));
	db bc = sqrt((c.x - b.x)*(c.x - b.x) + (c.y - b.y)*(c.y - b.y));
	if(check_triangle(ab, ac, bc) == false) cout << "INVALID" << endl;
	else{
		cout << fixed << setprecision(3)<< ab + ac + bc << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		point a, b, c;
		input(a, b ,c);
		output(a, b, c);
	}
}