#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/*
	Ternary Operator = ?
	
	Format: 
	Kondisi ? Hasil1 : Hasil2

*/

int main()
{
	int A, B;
	string Hasil1, Hasil2, Output;

	Hasil1 = "RizkyKhapidsyah";
	Hasil2 = "DessyPuspitaSari";

	A = 8;
	B = 9;

	Output = (A < B) ? Hasil1 : Hasil2;

	cout << Output << endl;

	_getch();
	return 0;
}