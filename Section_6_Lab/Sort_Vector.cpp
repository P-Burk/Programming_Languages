#include <iostream>
#include <vector>
using namespace std;

// uses bubble sort to sort vector least to greatest
void SortVector(vector<int>& myVec) {
    for (int j = 0; j < myVec.size(); j++) {
        int holderValue = myVec.at(0);
        for (int i = 0; i < myVec.size(); i++) {
            if (myVec.at(i) < holderValue) {
                swap(myVec[i], myVec[i - 1]);
            }
            holderValue = myVec.at(i);
        }
    }
}

int main() {
   vector<int> numVector;
    int sizeNum;
    int inputNum;

    // takes first input to set the size of the vector
    cin >> sizeNum;
    numVector.resize(sizeNum);

    // takes next inputs to populate vector
    for (int i = 0; i < numVector.size(); i++) {
        cin >> inputNum;
        numVector.at(i) = inputNum;
    }

    SortVector(numVector);

    // prints vector values
    for (int i = 0; i < numVector.size(); i++) {
        cout << numVector.at(i) << " ";
    }
    cout << endl;

   return 0;
}
