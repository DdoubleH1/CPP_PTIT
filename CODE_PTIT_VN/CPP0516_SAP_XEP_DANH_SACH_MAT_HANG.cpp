#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

struct item{
	int id;
	string name, group;
	db sell, buy;
	db profit;	
};

bool cmp(item a, item b){
	return a.profit > b.profit;
}


void nhap(item lst[], int n){
	for(int i = 0; i < n; i ++){
		scanf("\n");
		lst[i].id = i+1;
		getline(cin, lst[i].name);
		getline(cin, lst[i].group);
		cin >> lst[i].buy >> lst[i].sell;
		lst[i].profit = lst[i].sell - lst[i].buy;
	}
}

void sort(item lst[], int n){
	sort(lst, lst+n, cmp);
}

void inds(item lst[], int n){
	for(int i = 0; i < n; i++){
		cout << lst[i].id << " " << lst[i].name << " " << lst[i].group << " " << fixed << setprecision(2) << lst[i].profit << endl;
	}
}

int main(){
	int n; cin >> n;
	item lst[n];
	nhap(lst, n);
	sort(lst, n);
	inds(lst, n);
}