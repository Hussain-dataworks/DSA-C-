#include <iostream>
using namespace std;

// calculate the sum of all elements in array using pointers
int main() 
{

	int numbers[3][4] = { {10,20,30,40},{50,60,70,80}, {90, 100, 110, 120} };
	cout << "Calculate SUM of all Array elements\n";
	int sum = 0;
	for (int j = 0; j <= 2; j++)
	{
		for (int i = 0; i <= 3; i++)
		{
			sum += *(*(numbers + j) + i);

		}
	}
	cout << "sum: " << sum;
}
