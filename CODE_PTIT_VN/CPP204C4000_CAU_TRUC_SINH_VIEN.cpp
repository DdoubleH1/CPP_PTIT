#include <bits/stdc++.h>
using namespace std;


struct SinhVien{
	string name, clas, dob;
	float gpa;
};

void nhapThongTinSV(SinhVien &a){
	getline(cin, a.name);
	cin >> a.clas >> a.dob >> a.gpa;
	if(a.dob[2] != '/'){
		a.dob.insert(0, "0");
	}
	if(a.dob[5] != '/'){
		a.dob.insert(3, "0");
	}
}

void inThongTinSV(SinhVien &a){
	cout << "N20DCCN001 " << a.name << " " << a.clas << " " << a.dob << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
	struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}