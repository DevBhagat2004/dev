

#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int secret_num = rand() % 100 + 1;
	cout << "Welcome to the Random number guessing gave\n";
	cout << "I have chosen a number between 1 and 100\n";
	cout << "Guess which number I have chosen\n";
	int guess;
	int attemp = 0;
	
	do {
		
		
		cin >> guess;
		attemp++;
		if (guess == secret_num) cout << "You have chosen the correct number! "<< secret_num<< " in " << attemp<< " attemps" << endl;
		else if (guess > secret_num) cout << "Too high\n";
		else if (guess < secret_num) cout << "Too low\n";
	} while (true);
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
