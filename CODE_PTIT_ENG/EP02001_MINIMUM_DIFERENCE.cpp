//#include <iostream>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		int a[n], b[n], index = 0;
//		for(int i = 0; i< n; i++){
//			cin >> a[i];
//		}
//		sort(a, a+n);
//		int min = 10000000000;
//		for(int i = 0; i< n-1; i++){
//			b[index++] = a[i+1] - a[i];
//		}
//		for(int i =0 ;i < index ; i++){
//			if(min > b[i]) min = b[i];
//		}
//		cout << min << endl;
//	}
//}





#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long a[n + 3], hieu[n + 2], min = __LONG_MAX__;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            hieu[i] = abs(a[i + 1] - a[i]);
            if (min > hieu[i])
                min = hieu[i];
        }
        cout << min << endl;
    }
}
