#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
    double total;
    total = (drivenMiles / milesPerGallon) * dollarsPerGallon;
    return total;
}

int main() {
    double userMPG;
    double userCostPerGallon;

    cin >> userMPG;
    cin >> userCostPerGallon;

    cout << fixed << setprecision(2);
    cout << DrivingCost(10, userMPG, userCostPerGallon) << " ";
    cout << DrivingCost(50, userMPG, userCostPerGallon) << " ";
    cout << DrivingCost(400, userMPG, userCostPerGallon) << endl;
    return 0;
}
