#include <iostream>
using namespace std;
// tim hang(cot) co tong lon nhat, nhan voi so hang(cot) - tong cac phan tu ma tran = so buoc min
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n], sum_matrix = 0, s = 0;
		for(int i = 0 ;i< n; i++){
			for(int j = 0; j< n; j++){
				cin >> a[i][j];
				sum_matrix += a[i][j];
			}
		}
		int max = 0;
		for(int i = 0; i< n; i++){
			s = 0;
			for(int j = 0; j < n; j++){
				s += a[i][j];
			}
			if(s > max) max = s;
		}
		for(int i = 0; i< n; i++){
			s = 0;
			for(int j = 0; j < n; j++){
				s += a[j][i];
			}
			if(s > max) max = s;
		}
		cout << max*n - sum_matrix << endl;
	}
}