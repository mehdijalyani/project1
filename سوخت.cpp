#include <iostream>
using namespace std;

int main() 
{
    double fuel, consumption;
    double remainingDistance;

   cout << "please enter the amout of fuel and fuel consumption per hundred kilomeeters: ";
    cin >> fuel >> consumption;

    remainingDistance = fuel / consumption * 100;

    cout << "you can " << remainingDistance << " scroll another kilometer." << endl;

    if (remainingDistance < 100) {
        cout << "warning:the remining fuel is less than 100 km!" << endl;
    }

    return 0;
}



