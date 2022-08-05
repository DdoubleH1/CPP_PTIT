#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int year, week, day;
	year = n / 365;
	n = n % 365;
	day = n % 7;
	week = n / 7;
	cout << year << " " << week << " " << day;
}
