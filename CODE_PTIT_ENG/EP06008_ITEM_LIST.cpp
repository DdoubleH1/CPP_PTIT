#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <stdio.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct item{
	db buy, sell, profit;
	string name, group;
	ll id;
};

bool comp(item a, item b){
	return a.profit > b.profit;
}

void input(vector<item> &lst, int n){
	for(int i = 0; i< n; i++){
		scanf("\n");
		getline(cin, lst[i].name);
		getline(cin, lst[i].group);
		cin >> lst[i].buy >> lst[i].sell;
		lst[i].profit = lst[i].sell - lst[i].buy;
		lst[i].id = i+1;
	}
}

void solve(vector<item> &lst){
	sort(lst.begin(), lst.end(), comp);
}

void print(vector<item> &lst, int n){
	solve(lst);
	for(int i = 0; i< n; i++){
		cout << lst[i].id << " " << lst[i].name << " " << lst[i].group << " ";
		cout << fixed << setprecision(2) << lst[i].profit << endl;
	}
}

int main(){
	int n; cin >> n;
	vector <item> lst(n);
	input(lst, n);
	print(lst, n);
}
//
//
//
//
//#include <bits/stdc++.h>
//using namespace std;
//struct data{
//    int stt;
//    string ten,nhom;
//    double lai;
//};
//bool cmp(data a,data b){
//    return a.lai>b.lai;
//}
//int main(){
//    int n;
//    cin>>n;
//    double b,c;
//    vector <data> a(n);
//    for(int i=0;i<n;i++){
//        cin.ignore();
//        a[i].stt=i+1;
//        getline(cin,a[i].ten);
//        getline(cin,a[i].nhom);
//        cin>>b>>c;
//        a[i].lai=c-b;
//    }
//    sort(a.begin(),a.end(),cmp);
//    for(int i=0;i<n;i++){
//        cout<<a[i].stt<<" "<<a[i].ten<<" "<<a[i].nhom;
//        printf(" %.2lf\n",a[i].lai);
//    }
//}