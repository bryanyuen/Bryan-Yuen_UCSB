include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
        cout.setf(ios::fixed);     // Display in fixed point notation. For example, display 1e-1 as 0.1
        cout.setf(ios::showpoint);      // Always display the decimal point.
        cout.precision(3);
        int userInput = 0;
        double piValue = 0.000;
        string prompt = "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" ;
        cout << prompt << endl;
        cin >> userInput;
        while (userInput != -1){
        for (int i = 0; i <= userInput; i++){
        piValue += 4 * pow(-1,i)/(2*i + 1);
        }
        cout << "The approximate value of pi using " << userInput + 1 << " term is: " << piValue << endl;
        piValue = 0.000;
        cout << prompt << endl;
        cin >> userInput;
         if (userInput == -1){
                break;
}
}
        return 0;
}
