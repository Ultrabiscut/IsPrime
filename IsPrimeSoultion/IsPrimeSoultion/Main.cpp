#include <iostream>
using namespace std;

//function prototypes
bool TryAgain();

int main()
{

	//variables
	int iNum;
	bool bTrueOrFalse;

	do
	{
		//get input
		cout << "Enter an integer: ";
		cin >> iNum;

		//call on function



	} while (TryAgain());

	return 0;
}

bool IsPrime(int iVal)
{
	//count from 2 to iVal - 1
	for (int x = 2; x <= iVal / 2; x++)
	{
		//test to see if iVal is evenly divisible by x
		if (iVal % x == 0)
			return false; //isn't prime, so return false
	}
	
	//is a prime number, so return true
	return true;
}

bool TryAgain()
{
	//declare variables
	char cAgain;

	do
	{
		cout << "Continue? (Y/N): ";
		cin >> cAgain;
		cAgain = toupper(cAgain);
	} while (cAgain != 'Y' && cAgain != 'N');

	if (cAgain == 'Y')
		return true;

	return false;
}
