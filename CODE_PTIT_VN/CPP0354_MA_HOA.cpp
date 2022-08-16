#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        scanf("\n");
        // vector< pair<char,int> > res;
        string s; cin >> s;
        int count = 1;
        for(int i=0; i < s.size(); i++){
            if(s[i] == s[i+1]){
                count++;
            }
            else {
                cout << s[i] << count;
                count = 1;
            }
        }
        // for(auto x: res){
        //     cout << x.first << x.second;
        // }
        // for(int i = 0; i < res.size(); i++){
        //     cout << res[i].first << res[i].second;
        // }
        cout << endl;
    }
}

/*
2
AAAAAAAA
AAECCCCGGGD*/