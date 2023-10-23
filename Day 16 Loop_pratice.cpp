
//=======================================================================================================
//                                                                                                      =
//............................loop pratice using patterend  Day 4.......................................=
//                                                                                                      =
//=======================================================================================================
#include <iostream>
using namespace std;

// in day 4 we will pratice loop using different patterens


/*


			o o x o o
			o o x o o
			x x x x x
			o o x o o
			o o x o o


*/

int loop1() {


		int i,j;
		for (i = 1; i <= 5; i++) {  // thos for loop is used for printing numbers of row 

			for (j = 1; j <= 5; j++)
			{
				if (j == 3 || i == 3)   /// this if and else is used for condition here check weather to print or not

					cout << "x ";
				else
					cout << "o ";

			}
			cout << endl;

		}
		return 0;
}



/*


			xxxxx
			xxxxx
			xxoxx
			xxxxx
			xxxxx



*/

int loop2() {
	

	for (int i = 1; i <= 5; i++)   // this loop is for row printing
	{
		for (int j = 1; j <= 5; j++) //this loop is used for coloum printing
		{
			if (i == 3 && j == 3)   //thid condition is used for checking weather to print or not
				cout << "o";
			else
				cout << "x";
		}
		cout << endl;
	}
	return 0;
}
/*


				*****
				*   *
				*   *
				*   *
				*****


*/
// this loop we will use for printing a square box 

int loop3() {

	int n = 5; //size
	for (int i = 1; i <= n; i++)   // no of rows
	{
		for (int j = 1;j <= n; j++)   // no of coloum
		{
			if ((j == 1 || j == n) || (i == 1 || i == n))  // condition
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
		return 0;

}

/*

			*****
			*###*
			*###*
			*###*
			*****


*/
// loop used to print holo boc filled with a symbol or any other symbol 

int loop4() {

	int n = 5;
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= n;j++)
		{

			if ((j == 1 || j == n) || (i == 1 || i == n))
				cout << "*";  // any symbol
			else
				cout << "#"; //any symbol
		}
		cout << endl;
	}
	return 0;


}

/*



					*
				   * *
				  *   *
				 *     *
				*       *


*/

int loop5() {
	int n = 5;
	int px = n; // print controls
	int py = n;
	int i, j; // loop var
	for (i = 1;i <= n;i++)   //for row
	{
		for (j = 1;j <= n * 2; j++)   // for coloum
		{
			if (j == px || j == py)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
			px--;
			py++;
			cout << endl;
		}
	

		return 0;
	
}
int main()
{
	loop1();
	loop2();
	loop3();
	loop4();
	loop5();
}
