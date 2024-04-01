
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int a = 0, e = 0, i = 0, o = 0, u = 0, space = 0;
    int wordcount = 0;
    string word, targetword;
    cout << "Enter the word that you want to search for\n";
    cin >> targetword;
    char ch;

    ifstream file("vowels.txt");

    if (file.is_open()) {
        while (file.get(ch)) {
            if (isalpha(ch)) {
                ch = toupper(ch);
                if (ch == 'A')
                    a++;
                else if (ch == 'E')
                    e++;
                else if (ch == 'I')
                    i++;
                else if (ch == 'O')
                    o++;
                else if (ch == 'U')
                    u++;
            }
            else if (isspace(ch)) {
                space++;
            }
        }
        file.clear();
        file.seekg(0);

        while (file >> word) {
            if (word == targetword) {
                wordcount++;
            }
        }
        file.close();

        if (wordcount > 0) {
            cout << "The word count of " << targetword << " is " << wordcount << endl;
        }
        else {
            cout << "Word Not found\n";
        }
        cout << "A's " << a << endl;
        cout << "E's " << e << endl;
        cout << "I's " << i << endl;
        cout << "O's " << o << endl;
        cout << "U's " << u << endl;
        cout << "Spaces " << space << endl;
        cout << "End program." << endl;
    }
    else {
        cout << "File Error\n";
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
