#include <iostream>
using namespace std;
int main()
 {
    double x1, y1, x2, y2;
    cout << "please enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << " please enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    if (x1 == x2) {
        cout << "please choose another coordinate." <<endl;
        return 0;
    }

    double a = (y2 - y1) / (x2 - x1);
    double b = y1 - a * x1;

    cout << "the line that through these two points is as follows: " <<endl;
    cout << "y = " << a << "x + " << b <<endl;

    return 0;
}







