#include <iostream>
using namespace std;
int main() 
{
    int num, reverse = 0, remainder;
    cout << "enter a three-digit number: ";
    cin >> num;
    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    cout << "reverse number: " << reverse <<endl;

    return 0;
}








