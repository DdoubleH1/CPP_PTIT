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

struct timee{
	int hour, min, second;
};
////
//bool swap(timee a, timee b){
//	if(a.hour > b.hour) return a.hour < b.hour;
//	else if(a.hour == b.hour && a.min > b.min) return a.min < b.min;
//	else if(a.hour == b.hour && a.min == b.min && a.second > b.second) return a.second < b.second;
//}

bool can_swap(timee a, timee b)
{
    if (a.hour < b.hour)
        return true;
    else if (a.hour == b.hour && a.min < b.min)
        return true;
    else if (a.hour == b.hour && a.min == b.min && a.second < b.second)
        return true;
    else
        return false;
}

void input(timee clock[], int n){
	for(int i = 0; i< n ;i++){
		cin >> clock[i].hour >> clock[i].min >> clock[i].second;
	}
}

void print(timee clock[], int n){
	sort(clock, clock+n, can_swap);
	for(int i = 0; i< n; i++){
		cout << clock[i].hour << " " << clock[i].min << " " << clock[i].second << endl;
	}
}

int main(){
	int n; cin>> n; 
	timee clock[n];
	input(clock, n);
	print(clock, n);
}