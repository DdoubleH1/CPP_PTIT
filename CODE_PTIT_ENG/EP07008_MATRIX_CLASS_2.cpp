#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

class matrix{
	public:
		int row, col;
		int n[100][100] = {0};
};

void input(matrix &a, matrix &b){
	cin >> a.row >> a.col >> b.col;
	b.row = a.col;
	for(int i = 0; i< a.row; i++){
		for(int j = 0; j < a.col; j++){
			cin >> a.n[i][j];
		}
	}
	for(int i = 0; i< b.row; i++){
		for(int j = 0; j < b.col; j++){
			cin >> b.n[i][j];
		}
	}
}

void output(matrix &a, matrix &b){
	int c[100][100] = {0};
	for(int i = 0; i<a.row ; i++){
	    for(int k = 0; k<b.col ; k++){
            c[i][k] = 0;
            for(int j = 0; j< a.col ; j++){
			    c[i][k] += a.n[i][j] * b.n[j][k];
		    }
        }
    } 
	for(int i = 0; i < a.row; i++){
		for(int j = 0; j < b.col; j++){
			cout << c[i][j] << " ";
		}
		cout<< endl;
	}
}

int main(){
	matrix a, b;
//	int b[100][100] = {0};
	input(a, b);
	output(a, b);
}