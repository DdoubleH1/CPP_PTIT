#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        scanf("\n");
        // cin.ignore();
        string s; getline(cin, s);
        string tmp;
        stringstream ss(s);
        int count = 0;
        int odd = 0, even = 0;
        while(ss >> tmp){
            count++;
            int a = stoi(tmp);
            if(a % 2 == 0) even++;
            else odd++;
        }
        // cout << count << " " << even << " " << odd << endl;
        if(count % 2 == 0 && even > odd)
            cout << "YES\n";
        else if(count % 2 == 1 && odd > even)
            cout << "YES\n";
        else cout << "NO\n";

    }
}