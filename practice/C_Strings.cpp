#include <iostream>
#include <cstring>
using namespace std;

int str_len(const char *x) {
    int length = 0;
    for(int i = 0; x[i] != '\0' ;i++){
	    length++;
    }

    return length;
}           

int main()
{
	char C_String[] = "Hello World";
	cout << "The length of the C String: " << str_len(C_String) << endl;
	cout << "Method 2: " << strlen(C_String) << endl;    
	return 0;
}

