#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

void min(int m, int s){
    vector<int> a(m);
    s-=1;
    for(int i = m-1; i >=0; i--){
        if(s > 9){
            a[i] = 9;
            s -= 9;
        }
        else{
            a[i] = s;
            s= 0;
        }
    }
    a[0] += 1;
    for(auto x: a){
        cout << x;
    }
    cout << " ";
}


void max(int m, int s){
    vector<int> a(m);
    for(int i = 0; i <= m-1; i++){
        if(s > 9){
            a[i] = 9;
            s -= 9;
        }
        else{
            a[i] = s;
            s= 0;
        }
    }
    for(auto x: a){
        cout << x;
    }
    // cout << " ";
}

int main(){
    int m, s;
    cin >> m >> s;
    if(s > 9*m || s == 0)
        cout << -1 << " " << -1 << endl;
    else {
        min(m, s);
        max(m, s);
    }
}