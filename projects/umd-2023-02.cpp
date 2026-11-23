
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int findLargestNumber(int n, int digit1, int digit2) {
    string str = to_string(n);

    int large = max(digit1, digit2);
    int small = min(digit1, digit2);

    bool inserted = false;
    for (int i = 0; i < (int)str.length(); i++) {
        if ((str[i] - '0') < large) {
            str = str.substr(0, i) + to_string(large) + str.substr(i);
            inserted = true;
            break;
        }
    }
    if (!inserted) {
        str = str + to_string(large);
    }

    inserted = false;
    for (int i = 0; i < (int)str.length(); i++) {
        if ((str[i] - '0') < small) {
            str = str.substr(0, i) + to_string(small) + str.substr(i);
            inserted = true;
            break;
        }
    }
    if (!inserted) {
        str = str + to_string(small);
    }

    return stoi(str);
}

int main() {
    int testCases;
    cin >> testCases;

    for (int testCase = 0; testCase < testCases; testCase++) {
        int n, digit1, digit2;
        cin >> n >> digit1 >> digit2;
        cout << findLargestNumber(n, digit1, digit2) << endl;
    }

    return 0;
}
