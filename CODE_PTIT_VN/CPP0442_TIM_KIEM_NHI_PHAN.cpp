#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int binary_search(int a[], int left, int right, int x){
    if(left > right)
        return -1;
    else {
        int mid = (left + right)/2;
        if(a[mid] == x) 
            return 1;
        else if(a[mid] < x) 
            return binary_search(a, mid+1, right, x);
        else if(a[mid] > x)
            return binary_search(a, left, mid-1, x);
    }
}

int main(){
    test(){
        int n, x; cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << binary_search(a, 0, n-1, x) << endl;
    }
}