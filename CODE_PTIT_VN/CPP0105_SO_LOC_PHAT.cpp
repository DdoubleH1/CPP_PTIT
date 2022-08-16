#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        int check = 0;
        string s; cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '6' && s[i] != '8' && s[i] != '0'){
                cout << "NO" << endl;
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "YES" << endl;
    }
}