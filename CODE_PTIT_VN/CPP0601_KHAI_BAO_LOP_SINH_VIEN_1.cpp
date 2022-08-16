#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)


class SinhVien{
    public:
        string name, clas, dob;
        float gpa;
        void nhap(){
            // cin >> name >> clas >> dob >> gpa;
            getline(cin, name);
            cin >> clas >> dob >> gpa;
            if(dob[2] != '/'){
                dob.insert(0, "0");
            }
            if(dob[5] != '/'){
                dob.insert(3, "0");
            }
        }
        void xuat(){
            cout << "B20DCCN001 " << name << " " << clas << " " << dob << " " << fixed << setprecision(2) <<gpa;
        }
        // void standardizeDob(){
        //     if(name[2] != '/'){
        //         name.insert(0, "0");
        //     }
        //     if(name[5] != '/'){
        //         name.insert(3, "0");
        //     }
        // }
};


int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}