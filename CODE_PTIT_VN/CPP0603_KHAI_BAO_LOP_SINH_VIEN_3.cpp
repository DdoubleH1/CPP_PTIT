#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

void lowerCase(string &a){
	for(int i = 0; i < a.size(); i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}
	}
}

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
		void standardize_name(SinhVien &a){
			lowerCase(a.name);
			vector<string> standardName;
			stringstream ss(a.name);
			string token;
			while(ss >> token){
				token[0] -= 32;
				standardName.push_back(token);
			}
			for(int i = 0; i < standardName.size(); i++){
				cout << standardName[i] << " ";
			}
		}
		friend ostream &operator<<(ostream &out, SinhVien &a){
			a.standardize_dob(a);
			cout << "B20DCCN001 ";
			a.standardize_name(a);
			out << a.clas << " " << a.dob << " " << fixed << setprecision(2) << a.gpa;
			return out;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}