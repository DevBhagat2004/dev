#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

const int maxday = 31;

int main() {
    ifstream file("temp.txt");
    if (file.is_open()) {
        int day, maxTemp, minTemp;
        int maxDiff = 0;
        int maxDiffDay = -1;
        string line;

        while (getline(file, line)) {
            stringstream ss(line);
            ss >> day >> maxTemp >> minTemp ;

            int diff = maxTemp - minTemp;
            if (diff > maxDiff) {
                maxDiff = diff;
                maxDiffDay = day;
            }
        }

        file.close();

        if (maxDiffDay != -1) {
            cout << "Day with the largest temperature difference:" << endl;
            cout << "Day: " << maxDiffDay << endl;
            cout << "Temperature Difference: " << maxDiff << " degrees Fahrenheit" << endl;
        }
        else {
            cout << "No temperature data found in the file!" << endl;
        }
    }
    else {
        cout << "ERROR: Unable to open the file!" << endl;
    }

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
