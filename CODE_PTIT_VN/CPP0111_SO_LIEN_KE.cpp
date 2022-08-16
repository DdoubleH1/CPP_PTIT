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
        string s;
        cin >> s;
        int check = 0;
        for(int i = 0; i < s.length()-1; i++){
            if((s[i] - s[i+1]) != 1 && (s[i] - s[i+1]) != -1){
                cout << "NO" << endl;
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "YES" << endl;
        }
    }
}