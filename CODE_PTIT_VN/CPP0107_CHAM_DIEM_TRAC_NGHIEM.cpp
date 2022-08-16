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

// char a1[15] = {A,B,B,A,D,C,C,A,B,D,C,C,A,B,D};
// char a2[15] = {A,C,C,A,B,C,D,D,B,B,C,D,D,B,B};
string a1 = "ABBADCCABDCCABD";
string a2 = "ACCABCDDBBCDDBB";

int main(){
    test(){
        int a; cin >> a;
        char c;
        int count = 0;
        if(a == 101) {
            for(int i = 0; i< 15; i++){
                cin >> c;
                if(c == a1[i]){
                    count++;
                }
            }
        }
        else{
            for(int i = 0; i< 15; i++){
                cin >> c;
                if(c == a2[i]){
                    count++;
                }
            }
        }
        double score = 10.0*count/15;
        cout << setprecision(2) << fixed << score << endl;
    }
}