
#include <iostream>
using namespace std;

int main() 
{
    double a, b, c;
    int positiveCount = 0, negativeCount = 0;
    double average;

    cout << "please enter three number: ";
    cin >> a >> b >> c;

    if (a > 0) positiveCount++;
    if (b > 0) positiveCount++;
    if (c > 0) positiveCount++;

    if (a < 0) negativeCount++;
    if (b < 0) negativeCount++;
    if (c < 0) negativeCount++;

    average = (a + b + c) / 3;

    cout << "nmber of positive numbers: " << positiveCount << endl;
    cout << " nmber of negative numbers: " << negativeCount << endl;
    cout << " average: " << average << endl;

    return 0;
}






