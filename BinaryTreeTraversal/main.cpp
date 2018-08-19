#include <iostream>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
class tree{
    int info;
    tree *left,*right;
public:
    tree(){
        info=0;
        left=NULL;
        right= NULL;
    }

    ~tree(){

    }

    int insertNode(tree *temp);
    void preorder(tree *temp);
    void inorder(tree *temp);
    void postorder(tree *temp);
};

int tree::insertNode(tree *temp) {
    cin>>temp->info;
    if (temp->info){
        temp->left = new tree;
        cout<<"Left Child of "<<temp->info;
        cout<<":"<<endl;
        if(insertNode(temp->left)){
            free(temp->left);
            temp->left=NULL;
        }
        temp->right = new tree;
        cout<<"Right child of "<<temp->info;
        cout<<":"<<endl;
        if (insertNode(temp->right)){
            free(temp->right);
            temp->right=NULL;
        }
    }
    else{
        return 0;
    }
}

void tree::preorder(tree *temp) {
    if (temp->info){
        cout<<" "<<temp->info<<"\t";
        preorder(temp->left);
        preorder(temp->right);
    }
}

void tree::postorder(tree *temp) {
    if (temp->info){
        postorder(temp->left);
        postorder(temp->right);
        cout<<" "<<temp->info<<"\t";
    }
}

void tree::inorder(tree *temp) {
    if (temp->info){
        inorder(temp->left);
        cout<<" "<<temp->info<<"\t";
        inorder(temp->right);
    }
}

int main() {
    tree T;
    int choice=1;
    while (choice){
        cout<<endl<<"Menu"<<endl<<"1.Insert\t2.Preorder\t3.Inorder\t4.Postorder\t5.Exit"<<endl;
        cin>>choice;
        switch (choice){
            case 1:
                cout<<"Enter the Root Tree:"<<endl;
                T.insertNode(&T);
                break;
            case 2:
                cout<<"Preorder of Tree:"<<endl;
                T.preorder(&T);
                break;
            case 3:
                cout<<"Inorder of Tree:"<<endl;
                T.inorder(&T);
                break;
            case 4:
                cout<<"Postorder of Tree:"<<endl;
                T.postorder(&T);
                break;
            case 5:
                exit(0);
        }
    }
    return 0;
}