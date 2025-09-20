#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head = nullptr;

//create a list 
void createList(int n) 
{
    int data;
    Node* temp;
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter data: ";
        cin >> data;
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr)
         {
            head = newNode;
         } 
        else 
        {
            temp = head;
            while (temp->next != nullptr)
                {temp = temp->next;}
            temp->next = newNode;
        }
    }
}
//display list 
void displayList()
{
    Node* temp = head;
    cout << "Entered List is: ";
    while (temp != nullptr) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
//insert in list 
void insert(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) 
    {
        head = newNode;
    } 
    else 
    {
        Node* temp = head;
        while (temp->next != nullptr)
            {
                temp = temp->next;
            }
        temp->next = newNode;
    }
    cout << "Inserted data in list is:" << data<<endl;
}
// search in list
void search(int key) {
    Node* temp = head;
    int pos = 1;
    while (temp != nullptr) 
    {
        if (temp->data == key) {
            cout << key << "Position of element is:" <<pos<< endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << key << "Element not found"<<endl;
}
int main()
{
    int data;
    int choice;
    int n;
    int key;
    cout<<"\n1.Create a list\n2.Display a list\n3.Insert in a list\n4.Search in a list"<<endl;
    cout<<"Enter your choice(from 1 to 4):"<<endl;
    cin>>choice;

    switch(choice)
    {
            case 1:
                cout << "Number of node to be created: ";
                cin >> n;
                createList(n);
                break;
            case 2:
                displayList();
                break;
            case 3:
                cout << "Enter data to insert: ";
                cin >> data;
                insert(data);
                break;
            case 4:
                cout << "Enter element to search: ";
                cin >> key;
                search(key);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice\n";
    }
}
