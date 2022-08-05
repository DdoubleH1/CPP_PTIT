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


class Rectangle{
	public:
		int length, width;
		string color;
};

void input(Rectangle &a){
	cin >> a.length >> a.width >> a.color;
}

void processColor(string &a){
	for(int i = 0; i< a.size(); i++){
		if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
	a[0] -= 32;
}

void output(Rectangle &a){
	if(a.length > 0 && a.width > 0){
		cout << 2*(a.length + a.width) << " " << a.length * a.width << " ";
		processColor(a.color);
		cout << a.color;
	}
	else cout << "INVALID";
}

int main(){
	Rectangle A;
	input(A);
	output(A);
}