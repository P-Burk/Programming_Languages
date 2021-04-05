#include <iostream>
#include <string>

#include "ContactNode.h"

using namespace std;

int main() {
    string userInputName;
    string userInputPhone;

    // Create ContactNode objects
    ContactNode* person1 = nullptr;
    ContactNode* person2 = nullptr;
    ContactNode* person3 = nullptr;
    ContactNode* currObj  = nullptr;

    // get information for person 1
    cout << "Person 1" << endl;
    cout << "Enter name:" << endl;
    getline(cin, userInputName);
    cout << "Enter phone number:" << endl;
    getline(cin, userInputPhone);
    cout << "You entered: " << userInputName << ", " << userInputPhone << endl;
    cout << endl;


    // create the first node in the linked list
    person1 = new ContactNode(userInputName, userInputPhone);

    // get the information for person 2
    cout << "Person 2" << endl;
    cout << "Enter name:" << endl;
    getline(cin, userInputName);
    cout << "Enter phone number:" << endl;
    getline(cin, userInputPhone);
    cout << "You entered: " << userInputName << ", " << userInputPhone << endl;
    cout << endl;

    // create a new node for person 2
    person2 = new ContactNode(userInputName, userInputPhone);

    // insert the person 2 node after the person 1 node
    person1->InsertAfter(person2);

    // get the information for person 3
    cout << "Person 3" << endl;
    cout << "Enter name:" << endl;
    getline(cin, userInputName);
    cout << "Enter phone number:" << endl;
    getline(cin, userInputPhone);
    cout << "You entered: " << userInputName << ", " << userInputPhone << endl;
    cout << endl;

    // create a new node for person 3
    person3 = new ContactNode(userInputName, userInputPhone);

    // insert the person 3 node after the person 2 node
    person2->InsertAfter(person3);

    
    // Print linked list
    cout << "CONTACT LIST" << endl;
    currObj = person1;
    while (currObj != nullptr) {
        currObj->PrintContactNode();
        currObj = currObj->GetNext();
    }



   return 0;
}
