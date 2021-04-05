#include <iostream>
#include <string>

#include "ContactNode.h"

using namespace std;

// constructc ContactNode object
ContactNode::ContactNode(string name, string phoneNum, ContactNode* nextLoc) {
    this->contactName = name;
    this->contactPhoneNum = phoneNum;
    this->nextNodePtr = nextLoc;        // when a node is created, this defaults to nullptr
}

// returns the contact's name
string ContactNode::GetName() {
    return this->contactName;
}

// returns the phone number
string ContactNode::GetPhoneNumber() {
    return this->contactPhoneNum;
}

// prints the node information
void ContactNode::PrintContactNode() {
    cout << "Name: " << this->contactName << endl;
    cout << "Phone number: " << this->contactPhoneNum << endl;
    cout << endl;
}

// Grab location pointed by nextNodePtr
ContactNode* ContactNode::GetNext() {
   return this->nextNodePtr;
}

// used for changing the nxtNodePtr pointer variable

void ContactNode::InsertAfter(ContactNode* nodeLoc) {
   ContactNode* tmpNext = nullptr;
   
   tmpNext = this->nextNodePtr;    // Remember next
   this->nextNodePtr = nodeLoc;    // this -- node -- ?
   nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
}