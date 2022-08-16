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
        map<char, int> mp;
        string s; cin >> s;
        sort(s.begin(), s.end());
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        for(auto x: mp){
            if(x.second == 1)
                cout << x.first;
        }
        cout << endl;
    }
}