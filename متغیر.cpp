#include <iostream>
#include <algorithm>
using namespace std;

int main()
 {
    double numbers[5];
    double sum = 0, avg, maxNum, minNum;

    cout << "please enter five numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    avg = sum / 5;
    maxNum = *max_element(numbers, numbers+5);
    minNum = *min_element(numbers, numbers+5);

    cout << "grade point average: " << avg << endl;
    cout << "the largest number: " << maxNum << endl;
    cout << " the smaller number: " << minNum << endl;

    return 0;
}




