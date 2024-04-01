

#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void getinput(double& a, double& b, double& c);// declaration
bool quadratic(double a, double b, double c, double& r1, double& r2);


int main()
{
    double a, b, c, r_1, r_2;
    getinput(a, b, c);// getting the input from void getinput

    if(quadratic(a,b,c,r_1,r_2)) { // bool quadration() is true it will show the results
        cout << "The real roots are: " << r_2 << " and " << r_1 << endl;
    }
    else {// if not 
        cout << "No real root exsist\n";
    }
    return 0;
}
// to get the input , & is used when the value has to be modified
void getinput(double& a, double& b, double& c) {
    cout << "Enter a b c \n";
    cin >> a >> b >> c;


}
// to decided if the discriminat is greater than 0 or not, if yes then calculate r1 and r2
bool quadratic(double a, double b, double c, double& r1, double& r2) {


    double disc = (b * b) - (4 * a * c);// formula
    if (disc < 0) {
        return false;
    }
    
    r1 = (-b + sqrt(disc)) / (2 * a);
    r2 = (-b - sqrt(disc)) / (2 * a);// formula
    return true;


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
