#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> square_numbers(10);

    // Initialize square_numbers vector
    for (int i = 0; i < square_numbers.size(); i++)
        square_numbers[i] = i * i;

    // Print the square numbers
    for (int i = 1; i < square_numbers.size(); i++)
        cout << square_numbers[i] << ' ';
    cout << endl;

    return 0;
}
