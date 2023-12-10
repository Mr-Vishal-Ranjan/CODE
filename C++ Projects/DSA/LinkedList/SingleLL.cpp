#include <iostream>
using namespace std;

class Node {
    private: int value;
    public: Node(int val){
        value=val;
    }
    public: Node* next;
};

int main(){
    Node head = Node(1);
    head.next=new Node(2);
    head.next->next = new Node(3);
    head.next->next->next = new Node(4); 
}

