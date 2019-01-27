#include <iostream>
#include <string>
using namespace std;
int main() {
        cout << "Enter number of rows and columns: \n";
        int rows = 0;
        int col = 0;
        cin >> rows >> col;
        while (rows != 0 || col != 0){
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
        return 0;
}
}
