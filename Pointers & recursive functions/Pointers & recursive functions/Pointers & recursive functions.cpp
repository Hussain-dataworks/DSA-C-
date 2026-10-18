#include <iostream>
using namespace std;

// Swap two numbers (recall pass by refrence)

void swap(int& num1, int& num2);
int main()
{ 
    int Num1, Num2;
    cout << "Enter First Number" << endl;
    cin >> Num1;
    cout << "Enter second Number" << endl;
    cin >> Num2;
    swap(Num1, Num2);
    cout << "First Number =" << Num1 << endl;
    cout << "Second Number =" << Num2;


}

void swap(int& Num1, int& Num2)
{
    int temp = Num1;
    Num1 = Num2;
    Num2 = temp;

}
