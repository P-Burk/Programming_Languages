#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
    double milesPerGallon;
    double dollarsPerGallon;

    cin >> milesPerGallon;
    cin >> dollarsPerGallon;

    cout << fixed << setprecision(2);
    cout << 20 / milesPerGallon * dollarsPerGallon << " ";
    cout << 75 / milesPerGallon * dollarsPerGallon << " ";
    cout << 500 / milesPerGallon * dollarsPerGallon;

   return 0;
}
