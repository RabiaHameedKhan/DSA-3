#include <iostream>
using namepsace std;

struct {
    int data;
    Node*next;

    bool search(Node*head, int key){
        while(Node*head!=NULL){
            if(head->data==key){
                return true;
                head=head->key;
            }
            else{
                return false;
            }
            

        }
    }


}
int main(){
    Node*head= new Node{10, new Node{20, new Node{30, NULL }}};
    int key;
    cout<<"Enter the num u want to seaqrch";
    cin>>key;

    cout<<search(head,key? "found": "Not found");
}