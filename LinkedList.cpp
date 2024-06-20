#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class Node {
    public:
     int data;
     Node* next;
     Node(int data) {
         this -> data = data;
         this -> next = nullptr;
     }
};
Node* reverse(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* newHead = reverse(head->next);
    Node* front = head -> next;
    front -> next = head;
    head -> next = nullptr;
    return newHead;
}

Node *createLL(int arr[], int n) {
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < n; i++) {
        Node* newNode= new Node(arr[i]);
        temp -> next = newNode;
        temp = newNode;
    }
    return head;
}
void display(Node* head) {
    while(head != nullptr){
        cout<<head -> data<<" ";
        head = head -> next;
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    Node* head = createLL(a,n);
    display(head);
    head = reverse(head);
    display(head);
    return 0;
}
