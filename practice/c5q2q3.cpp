#include <iostream>
using namespace std;

int main(){
	int n = 9;
	switch (n^6) {
		case 0xF: n++;
		case 0xA: n/=2;
		case 0x1: break;
		case 0x0: n--;
		default: n = 0;
	}

	cout << n << endl;
}
