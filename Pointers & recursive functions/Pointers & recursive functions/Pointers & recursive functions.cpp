#include <iostream>
using namespace std;

// Print all array elements using pointer
int main() {

    int numbers[3][4] = { {10,20,30,40},{50,60,70,80}, {90, 100, 110, 120} };
    cout << "Print all Array elements\n\n";

    for (int j = 0; j <= 2; j++)
    {
        for (int i = 0; i <= 3; i++)
        {
            cout << *(*(numbers + j) + i) << "\t";

        }
        cout << "\n";
    }
}
