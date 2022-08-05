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
		int a[100][100] = {0};
};

void input(matrix &s, int b[100][100]){
	cin >> s.row >> s.col;
//	int b[100][100] = {0};
	for(int i = 0; i< s.row; i++){
		for(int j = 0; j < s.col; j++){
			cin >> s.a[i][j];
			b[j][i] = s.a[i][j];
		}
	}
}

void output(matrix &s, int b[100][100]){
	int c[100][100] = {0};
	for(int i = 0; i<s.row ; i++){
	    for(int k = 0; k<s.row ; k++){
            c[i][k] = 0;
            for(int j = 0; j<s.col ; j++){
			    c[i][k] += s.a[i][j]*b[j][k];
		    }
        }
    } 
	for(int i = 0; i < s.row; i++){
		for(int j = 0; j < s.row; j++){
			cout << c[i][j] << " ";
		}
		cout<< endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		matrix s;
		int b[100][100] = {0};
		input(s, b);
		output(s, b);
	}
}