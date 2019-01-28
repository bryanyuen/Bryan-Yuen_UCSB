#include <iostream>
#include <string>
using namespace std;

int main (int score){
        score = 0;
        if (score > 100 || score < 0){
                cout << "Not a valid score" << endl;
                        return 0;
        }
        if (score <= 100 && score >= 90){
                cout << "Grade is A" << endl;
        }else if (score < 90 && score >= 80){
                        cout << "Grade is B" << endl;
                }else if (score < 80 && score >= 70){
                                cout << "Grade is C" << endl;
                        }else if (score < 70 && score >= 60){
                                cout << "Grade is D" << endl;
                                }else{
                                        cout << "Grade is F" << endl;
}
        return 0;
}

