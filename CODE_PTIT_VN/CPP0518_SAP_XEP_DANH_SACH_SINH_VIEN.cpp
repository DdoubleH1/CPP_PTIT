#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int i = 1;

struct NhanVien{
	int id;
	string name, gender, dob, address, code, date;
	int day, month, year;
};

bool cmp(NhanVien a, NhanVien b){
	if(a.year < b.year)
		return true;
	if(a.year == b.year && a.month < b.month)
		return true;
	else if(a.year == b.year && a.month == b.month && a.day < b.day)
		return true;
	return false;
}

void nhap(NhanVien &a){
	scanf("\n");
	getline(cin, a.name);
	getline(cin, a.gender);
	getline(cin, a.dob);
	getline(cin, a.address);
	getline(cin, a.code);
	getline(cin, a.date);
	a.id = i++;
	a.day = (a.dob[3] - '0')*10 + (a.dob[4] - '0');
	a.month = (a.dob[0] - '0')*10 + (a.dob[1] - '0');
	a.year = (a.dob[6] - '0')*1000 + (a.dob[7] - '0')*100 + (a.dob[8]-'0')*10 + (a.dob[9] - '0');
}

void sapxep(NhanVien ds[], int N){
	sort(ds, ds+N, cmp);
}

void inds(NhanVien ds[], int N){
	for(int i = 0; i < N; i++){
		if(ds[i].id < 10){
			cout << "0000" << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].code << " " << ds[i].date << endl;
		}
		else{
			cout << "000" << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].code << " " << ds[i].date << endl;
		}
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}