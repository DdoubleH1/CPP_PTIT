#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

class SinhVien{
	public:
		string name, clas, dob;
		float gpa;
		friend istream &operator>>(istream &in, SinhVien &a){
			scanf("\n");
			getline(in, a.name);
			in >> a.clas >> a.dob >> a.gpa;
			return in;
		}
		void standardize_dob(SinhVien &a){
			if(a.dob[2] != '/'){
				a.dob.insert(0, "0");
			}
			if(a.dob[5] != '/'){
				a.dob.insert(3, "0");
			}
		}
		friend ostream &operator<<(ostream &out, SinhVien &a){
			a.standardize_dob(a);
			cout << "B20DCCN001 ";
			out << a.name << " " << a.clas << " " << a.dob << " " << fixed << setprecision(2) << a.gpa;
			return out;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}