#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

void lowerCase(string &s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}

int main(){
    string s;
    cin >> s;
    lowerCase(s);
    int i = 0;
    while(i < s.length()){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            i++;
        else{
            cout << "." << s[i];
            i++;
        }
    }
}