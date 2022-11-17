#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	//declare variable n, i, e, sum, frac
	int n, i;
	double e, sum, frac;

	//acquire integer number from user
	cout << "\nEuler's Number Calculator\n\n";
	cout << "Please enter an integer (non-negative):";
	cin >> n;

	//if user input negative integer, loop to ask user until user input valid integer
	while (n < 0)
	{
		cout << "Error! You had entered invalid integer!\n\n";
		cout << "Please enter an integer (non-negative):";
		cin >> n;
	}

	//Calculation
	if (n == 0)
	{
		frac = 0;
	}

	else if (n == 1)
	{
		frac = 0.5;
	}

	else
	{
		//Start calculation from innermost fraction: the n+1 term
		frac = n / (n + 1.0);

		i = n;

		//loop until i is larger or equal to 2
		for (i; i >= 2; i--)
		{
			sum = i + frac;
			frac = (i - 1.0) / sum;
		}
	}

	//calculate the variable e
	e = 2 + 1 / (1 + frac);
	//display variable e in 15 decimal points
	cout << "Euler's number, e = " << fixed << setprecision(15) << e << endl;


	system("PAUSE");
	return 0;
	
}