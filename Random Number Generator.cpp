#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    int max = 10;
    // Generate and print 5 random numbers
    for (int i = 0; i < 5; ++i) {
        int randomNumber = rand() % (max + 1);
        cout << "Random number " << i + 1 << ": " << randomNumber << endl;
    }

    return 0;
}