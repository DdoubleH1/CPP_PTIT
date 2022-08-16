#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


struct NhanVien{
	string name, gender, dob, address, code, date;
};

void nhap(NhanVien &a){
	scanf("\n");
	getline(cin, a.name);
	getline(cin, a.gender);
	getline(cin, a.dob);
	getline(cin, a.address);
	getline(cin, a.code);
	getline(cin, a.date);
}

void inds(NhanVien ds[], int N){
	for(int i = 0; i < N; i++){
		if(i < 9){
			cout << "0000" << i+1 << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].code << " " << ds[i].date << endl;
		}
		else{
			cout << "000" << i+1 << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].code << " " << ds[i].date << endl;
		}
	}
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}