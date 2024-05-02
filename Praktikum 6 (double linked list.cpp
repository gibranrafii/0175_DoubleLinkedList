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
    Node* newNode = new Node();
    cout << "\nEnter the roll number of student: ";
    cin >> newNode->noMhs;
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;
}

int main()
{
    
}