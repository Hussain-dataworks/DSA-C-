
#include <iostream>
using namespace std;

int main()
{

		//<---------- 1 Dimentional Arrays ------------->
		int Col1;
		cout << "One Dimenstional Dynamic Array\n";
		cout << "Enter no of columns in Array: ";
		cin >> Col1;
		int* D1 = new int[Col1];
	
		for (int j = 0; j <= Col1 - 1; j++)
		{
			cout << "Enter Value" << j + 1 << ":";
			cin >> D1[j];
		}
	
		for (int i = 0; i <= Col1 - 1; i++)
		{
			cout << D1[i] << "\t";
		}
	
		delete[] D1;
	

		//<---------- 2 Dimentional Arrays ------------->
		int Row2 = 0, Col2 = 0;
		cout << "\n\nTwo Dimenstional Dynamic Array\n";
		cout << "Enter Number of rows in 2D Array: ";
		cin >> Row2;
		cout << "Enter Number of columns in 2D Array :";
		cin >> Col2;
		int** Array2D = new int* [Row2];
		for (int i = 0; i < Row2; i++)
		{
			Array2D[i] = new int[Col2];
		}
	
		cout << "\nEnter values to be stored in 2D Array: \n";
		for (int j = 0; j < Row2; j++)
		{
			cout << "For row " << j + 1<<" :\n" ;
			for (int k = 0; k < Col2; k++)
			{
				cout << "Enter value " <<(k + 1)<<" : ";
				cin >> Array2D[j][k];
			}
		}
	
		cout << "\nDisplaying Values Stored in 2D Array: \n";
		for (int j = 0; j < Row2; j++)
		{
			for (int k = 0; k < Col2; k++)
			{
				cout << Array2D[j][k] << "\t";
			}
			cout << endl;
		}
		for (int i = 0; i < Row2; i++)
		{
			delete Array2D[i];
		}
		delete Array2D;
	


		//<---------- 3 Dimentional Arrays ------------->

		int Num_of_2D_Array = 0, Row3 = 0, Col3 = 0;
		cout << "\nThree Dimenstional Dynamic Array\n";
		cout << "Enter Number of 2D Array you want in your 3D Array: ";
		cin >> Num_of_2D_Array;
		cout << "Enter Number of Rows in Each 2D Array :";
		cin >> Row3;
		cout << "Enter Number of columns in Each 2D Array :";
		cin >> Col3;
	
		int*** Array3D = new int** [Num_of_2D_Array];
	
		for (int j = 0; j < Num_of_2D_Array; j++)
		{
			Array3D[j] = new int* [Row3];
		}
		for (int k = 0; k < Num_of_2D_Array; k++)
		{
			for (int j = 0; j < Row3; j++)
			{
				Array3D[k][j] = new int[Col3];
			}
		}
	
		cout << "Enter Elements to be stored in 3D Array: \n";
	
		for (int k = 0; k < Num_of_2D_Array; k++)
		{
			cout << "For  2D Array Number  "<< k + 1 <<" : \n";
			for (int j = 0; j < Row3; j++)
			{
				cout << "For Row " << j+ 1<<"\n";
				for (int i = 0; i < Col3
					; i++)
				{
					cout << "Enter Value " << i + 1<<": ";
					cin >> Array3D[k][j][i];
				}
			}
		}
	
		cout << "\n\nDisplay all Elements in 3D Array: \n";
	
		for (int k = 0; k < Num_of_2D_Array; k++)
		{
			cout << "For  2D Array Number  " << k + 1 << " : \n";
			for (int j = 0; j < Row3; j++)
			{
				for (int i = 0; i < Col3; i++)
				{
					cout << Array3D[k][j][i]<<"\t";
				}
				cout << endl;
			}
			cout << endl;
		}
		
	
	
		for (int k = 0; k < Num_of_2D_Array; k++)
		{
			for (int j = 0; j < Row3; j++)
			{
				delete Array3D[k][j];
			}
		}
		for (int j = 0; j < Num_of_2D_Array; j++)
		{
			delete Array3D[j];
		}
		delete[] Array3D;
		return 0;
}
