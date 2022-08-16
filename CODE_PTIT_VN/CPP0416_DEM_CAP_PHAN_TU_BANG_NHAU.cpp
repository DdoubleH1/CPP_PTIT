// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;
// typedef double db;
// const long long mod = 1e9 + 7;

// int n, k, a[105];

// int main(){
//     test(){
//         cin >> n >> k;
//         for(int i = 0; i < n; i++){
//             cin >> a[i];
//         }

//         int count = 0;
//         // for(int i = 0; i < n-1; i++){
//         //     for(int j = i+1; j < n; j++){
//         //         if(a[i] + a[j] == k)
//         //             count++;
//         //     }
//         // }
//         sort(a, a+n);
//         int l = 0, r = n-1;
//         while(l < r){
//             if(a[l] + a[r] > k) r--;
//             else if(a[l] + a[r] < k) l++;
//             else if (a[l] + a[r] == k){
//                 count++;
//                 r--;
//             }
//         }
//         cout << count << endl;
//     }
// }





#include <bits/stdc++.h>
using namespace std;
#define test()    int t; cin >> t; while (t--)
int main()
{
    test(){
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> fre;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            fre[arr[i]]++;
        }
        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k - arr[i])
            {
                answer += (fre[arr[i]] - 1);
            }
            else
            {
                answer += (fre[k - arr[i]]);
            }
        }
        answer /= 2;
        cout << answer << endl;

    }
    return 0;
}