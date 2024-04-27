#include <iostream>
using namespace std;

int main()
 {
    double avg;
    cout << "please enter the grade: ";
    cin >> avg;

    if(avg >= 17 && avg < 20) {
        cout << "your rank: A" << endl;
    } else if(avg >= 14 && avg < 17) {
        cout << " your rank: B" << endl;
    } else if(avg >= 10 && avg < 14) {
        cout << " your rank ا: C" << endl;
    } else if(avg >= 0 && avg < 10) {
        cout << " your rank: D" << endl;
    }

    if(avg < 10) {
        cout << "you are conditional." << endl;
    } else {
        cout << " you are not conditional." << endl;
    }

    return 0;
}





