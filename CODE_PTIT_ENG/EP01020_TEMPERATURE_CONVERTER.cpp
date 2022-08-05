#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;
typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){
	float c; cin >> c;
	float f = ((c*9) / 5) + 32;
	printf("%.2f", f);
}
