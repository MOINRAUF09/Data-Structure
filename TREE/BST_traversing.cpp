#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};
void preorder(struct node*root){
    if(root==NULL){
        return;
    }
    else{
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
    
    }

}
void inorder(struct node*root){
    if(root==NULL){
        return;
    }
    else{
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
    
    }
}
void postorder(struct node*root){
    if(root==NULL){
        return;
    }
    else{
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
    
    }

}

int main(){
    struct node* root =new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left = new node(4);
    root->left->right =new node(5);
    //cout<<root->left->left ->data<<endl;
    
    cout<<"preOrder"<<endl;
    preorder(root);
    
    cout<<"postOrder"<<endl;
    postorder(root);
    
    cout<<"inOrder"<<endl;
    inorder(root);

}