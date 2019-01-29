#include <iostream>
#include <string>
using namespace std;

int main() {
        string prompt =  "Enter number of rows and columns:\n";
        int rows = 0;
        int col = 0;

        do{
        cout << prompt;
        cin >> rows >> col;
             for(int j = 1; j <= rows ; j++){
                        cout <<"X." ;
             for (int i = 1; i <= col - 1; i++){
                        cout << "X.";
                }
                        cout << "\n";
        }
        if (rows == 0 || col == 0){
                break;
        }
        }while (rows != 0 || col != 0);

        return 0;
}
