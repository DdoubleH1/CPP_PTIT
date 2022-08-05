#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
typedef  double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define PI 3.141592653589793238;
struct point{
	int x, y;
};

void read_input(point &a){
	cin >> a.x >> a.y;
}

int check_triangle(db a, db b, db c){
	if(a+b > c && a+c > b && b+c > a) return 1;
	return 0;
}

void process(point &a, point &b, point &c){
	db ab = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
	db ac = sqrt((a.x-c.x)*(a.x-c.x) + (a.y-c.y)*(a.y-c.y));
	db bc = sqrt((b.x-c.x)*(b.x-c.x) + (b.y-c.y)*(b.y-c.y));
	db s = 1/4 * sqrt((ab+ac+bc) * (ab+ac-bc) * (ab+bc-ac) * (ac+bc-ab));
	db r = ab * bc * ac / (4 * s);
    db result = PI * r * r;
	if(check_triangle(ab, ac, bc) == 0) cout << "INVALID" << endl;
	else cout << fixed << setprecision(3) << result << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		point A, B, C;
		read_input(A);
		read_input(B);
		read_input(C);
		process(A, B, C);
	}
}



//#include <iostream>
//#include <iomanip>
//#include <math.h>
//using namespace std;
//#define PI 3.141592653589793238
//double a1, a2, b1, b2, c1, c2;
//double a, b, c;
//bool check()
//{
//    a = sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));
//    b = sqrt((c1 - b1) * (c1 - b1) + (c2 - b2) * (c2 - b2));
//    c = sqrt((a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2));
//    if (a + b > c && b + c > a && c + a > b)
//        return true;
//    else
//        return false;
//}
//void solve()
//{
//    double s = sqrt((a + b + c) * (a + b - c) * (b + c - a) * (a + c - b)) / 4;
//    double r = a * b * c / (4 * s);
//    double result = PI * r * r;
//    cout << fixed << setprecision(3) << result << endl;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
//        if (!check())
//            cout << "INVALID\n";
//        else
//        {
//            solve();
//        }
//    }
//    return 0;
//}