# include <iostream>
using namespace std;

//searching in linkedlist

//create a struct for linkedlist
struct Node{
    int data;
    Node*next;
};

//create a  search function for searching
int search(Node*head,int key){
    int index=0;

    while(head!=NULL){
        if(head->data==key){
            return index;
        }
        head=head->next;
        index++;
    }
    return -1;
}

int main(){
    int key;
    Node*head= new Node{10, new Node{20, new Node{30, NULL}}};
    cout<<"Enter the number u want to search: ";
    cin>>key;
    cout<<endl;

    int result= search(head,key);

    if(result!=-1){
        cout<<"Number found at "<<result<<endl;
    }
    else{
        cout<<"Number not found"<<endl;
    }



    return 0;
}