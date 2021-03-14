#include <iostream>
#include <string>
using namespace std;

int main() {
    string userNoun;
    int userNum;

    cin >> userNoun;
    cin >> userNum;

    while (userNoun != "quit"){
        cout << "Eating " << userNum << " " << userNoun << " " << "a day keeps you happy and healthy." << endl;
        cin >> userNoun;
        cin >> userNum;
    }
    

    return 0;
}
