#ifndef CONTACTNODE_H
#define CONTACTNODE_H
#include <string>

using namespace std;

class ContactNode {
    public:
        ContactNode(string name, string phoneNum, ContactNode* nextloc = nullptr);

        void InsertAfter(ContactNode* nodeLoc);         
        string GetName();                   // accessor
        string GetPhoneNumber();            // accessor
        ContactNode* GetNext();             // accessor 
        void PrintContactNode();


    private:
        string contactName;
        string contactPhoneNum;
        ContactNode* nextNodePtr;

};

#endif