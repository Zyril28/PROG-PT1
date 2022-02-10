//Name: Zyril Venedict C. Zamonte
//Activity: PT1
//Date: February 10, 2022
//Year and Section: BSIE 1-1

#include <iostream>

using namespace std;

int main (){
    int number, range;
    char choices;

    do{
        cout << "Enter the range of numbers: ";
        cin >> range;
        for (int number, count = 1; count <= range; count++){
            cout << "Enter the number that you want to know. " << "[" << count << "]: ";
            cin >> number;
            if (number % 2 == 0){
            cout << number << " is a number that is EVEN." << endl;
            } else {
            cout << number << " is a number that is ODD." << endl;
            }
        }
            cout << "Do you want to try again? [y/n]: ";
            cin >> choices;
            cout << endl;
    } while (choices == 'y');

    return 0;
}