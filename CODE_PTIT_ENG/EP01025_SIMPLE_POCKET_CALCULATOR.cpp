#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	float a, b;
	char c;
	cin >> a;
//	cin >> " ";
	cin >> c;
//	cin >> " ";
	cin >> b;
	if(c == '+'){
		printf("%.2f", a+b);
	}
	else if(c == '-'){
		printf("%.2f",a-b);
	}
	else if(c == '*'){
		printf("%.2f", (a*b));
	}
	else if(c == '/'){
		printf("%.2f", a/b);
	}
	
}
