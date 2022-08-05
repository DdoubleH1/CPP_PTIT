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


class Point{
	public:
		db x, y;
};

void input(Point &a){
	cin >> a.x >> a.y;
}

void distance(Point &a, Point &b){
	cout << fixed << setprecision(4) << sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)) << endl;
}

int main(){
	Point A, B;
	int t; cin >> t;
	while(t--){
		input(A);
		input(B);
		distance(A, B);
	}	
}