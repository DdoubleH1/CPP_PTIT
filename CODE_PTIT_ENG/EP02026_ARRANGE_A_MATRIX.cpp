#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int m, n, k;
	cin >> m >> n >> k;
	int a[m][n];
	for(int i = 0; i< m; i++){
		for(int j = 0; j< n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i< m-1; i++){
		for(int j = i+1; j < m; j++){
			if(a[i][k-1] > a[j][k-1]) 	swap(&a[i][k-1], &a[j][k-1]);
		}
	}
	for(int i = 0; i< m; i++){
		for(int j = 0; j< n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}	
}