#include<iostream>
using namespace std;
template<typename type>
class tree{
    struct Node{
        type data;
        Node*left;
        Node*right;
        Node(type d){
            this->data=d;
            this->left=this->right=nullptr;
        }
    };
    public:
    Node*Root=nullptr;
    tree(){
        Node* f=new Node('F');
        Node* b=new Node('B');
        Node* g=new Node('G');
        Node* a=new Node('A');
        Node* d=new Node('D');
        Node* i=new Node('I');
        Node* c=new Node('C');
        Node* e=new Node('E');
        Node* h=new Node('H');
        f->left=b;
        f->right=g;
        b->left=a;
        b->right=d;

        g->right=i;
        d->left=c;
        d->right=e;
        i->left=h;
        Root=f;
    }
    void preorder(Node*ptr){
        if(ptr!=nullptr){
            cout<<" "<<ptr->data;
            preorder(ptr->left);
            preorder(ptr->right);

        }
    }
    void inorder(Node*ptr){
        if(ptr!=nullptr){
            inorder(ptr->left);
            cout<<" "<<ptr->data;
            inorder(ptr->right);
        }
    }
    void postorder(Node*ptr){
        if(ptr!=nullptr){
            postorder(ptr->left);
            postorder(ptr->right);
            cout<<" "<<ptr->data;
        }
    }
};
int main(){
    tree<char>obj;
    if(obj.Root==nullptr){
    cout<<"Tree is empty!!";
}else{
    cout<<"Pre order Treversal";
    obj.preorder(obj.Root);
    cout<<"Inorder treversal";
    obj.inorder(obj.Root);
    cout<<"Postorder treversal";
    obj.postorder(obj.Root);
}
return 0;
}
