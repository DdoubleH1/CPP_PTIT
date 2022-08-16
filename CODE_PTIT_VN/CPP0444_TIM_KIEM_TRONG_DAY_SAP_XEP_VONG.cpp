#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        int n, x; cin >> n >> x;
        int a[n];
        vector< pair<int, int> > value_positions;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        value_positions.push_back(make_pair(a[0],0));
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1])
                value_positions.push_back(make_pair(a[i+1],i+1));
        }
        int index = 0;
        for(auto i: value_positions){
            if(x > i.first){
                index = i.second;
                break;
            }
        }
        for(int i = index; i < n; i++){
            if(a[i] == x){
                cout << i+1 << endl;
                break;
            }
        }
    }
}