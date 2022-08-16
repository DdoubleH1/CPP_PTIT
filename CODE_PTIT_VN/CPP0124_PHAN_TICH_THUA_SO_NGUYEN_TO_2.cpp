// #include <iostream>
// #include <iomanip>
// #include <math.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <set>
// #include <map>

// using namespace std;
// typedef long long ll;
// typedef double db;
// const long long mod = 1e9 + 7;
// #define test()    int t; cin >> t; while (t--)

// int find_divisor(int n){
//     for(int i = 2; i<= sqrt(n); i++){
//         if(n % i == 0) return i;
//     }
//     return n;
// }

// int main(){
//     test(){
//         ll n; cin >> n;
//         // int i = 2;
//         map<int,int> res;
//         while(n > 1){
//             int i = find_divisor(n);
//             while(n % i == 0){
//                 res[i]++; 
//                 n /= i;  
//             }
//         }

//         for(auto x: res){
//             cout << x.first << " " << x.second << endl;
//         }
//         // cout << endl;

//     }
// }



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
    int n; cin >> n;
    int i = 2;
    map<int,int> res;
    while(n > 1){
        if(n % i == 0){
            res[i]++; 
            n /= i;  
        }
        else i++;
    }
    for(auto x: res){
        cout << x.first << " " << x.second << endl;
    }
        // cout << endl;
}