#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node *next;
    Node* prev;
};

Node* START = NULL;

void addNote() {
    Node* newNode = new Node(); // STEP 1: create a new node
    cout << "\nEnter the roll number of student: ";
    cin >> newNode->noMhs;      // assign value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;       // Assign value to the data field of the new node

    // Insert the new node in the list
    if (START == NULL || newNode->noMhs <= START->noMhs) { // STEP 2: insert the new node
        
        if (START != NULL && newNode->noMhs == START->noMhs) {
            cout << "\033[31mDuplicate roll not allowed\033[0m" << endl;
            return;
        }
    }
}

int main()
{
    
}