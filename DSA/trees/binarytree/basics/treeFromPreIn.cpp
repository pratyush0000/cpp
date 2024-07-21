#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int value){
        data=value;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start,int end, int curr){
    for(int i = start; i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}


Node* buildTree(int preorder[],int inorder[], int start, int end, int &idx){
    if(start>end){
        return NULL;
    }
    
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);

    if(start==end){
        return node;
    }

    int pos = search(inorder,start,end,curr);
    node->left = buildTree(preorder,inorder,start,pos-1,idx);
    node->right = buildTree(preorder, inorder, pos+1, end,idx);

    return node;

}

int main(){

    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    int idx=0;

    Node* root = buildTree(preorder,inorder,0,4,idx);
    inorderPrint(root);

    return 0;
}