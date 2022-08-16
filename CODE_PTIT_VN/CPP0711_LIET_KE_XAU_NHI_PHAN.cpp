#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int n; 
bool isFinal;
int a[30];
void initialize(){
	for(int i = 0; i < n; i++){
		a[i] = 0;
	}
}

void generate(){
	int i = n-1;
	while(i >= 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if( i == -1)
		isFinal = true;
	
	else a[i] = 1;	
}

int main(){
	test(){
		cin >> n;
		initialize();
		isFinal = false;
		while(isFinal != true){
			for(int i = 0; i < n; i++){
				cout << a[i];
			}
			cout << " ";
			generate();
		}
		cout << endl;
	}
}