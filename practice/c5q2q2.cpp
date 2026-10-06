#include <iostream>
using namespace std;

int main(){
	int u = 2, v = 4, total = 0;
	do {
		total += u < v ? ++u :v--;
		cout << u << '&' << v << endl;
	} while (total < 10);
	cout << u << '&' << v << endl;
}
