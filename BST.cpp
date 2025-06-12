#include <iostream>
using namepsace std;

class Node{
    int data;
    Node*left;
    Node*right;

    public:
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

void Node*insert(Node*root, int target){
    if(root==NULL){
        Node*temp= newNode(taregt);
        return temp;
    }

    if(target<root->data){
       root->left= insert(root->left, target)
    }
    else{
        root->right=insert(root->right, target)
    }
}

void inorder(Node* root){
    if(!root){
        return ;
    }
   inorder(root->left);
   cout<<root->data;
   inorder(root->right);
}

void search(Node*root, target){
    if(root==NULL){
        return;
    }
    if(root->data==target){
        return 1;
    }

    if(root->data>target){
        return serach(root->left, target)
    }
    else{
        return search(root->right, target)
    }
}

int main(){
    int array= {1,2,3,4,5,6};

    Node* root=NULL;
    for(int i-=0; i<6; i++){
        root=insert(root, array[i]);
    }

    inorder(root);
    cout<<endl;
    cout<<search(root, 4);

    return 0;
}