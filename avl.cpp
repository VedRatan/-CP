#include <bits/stdc++.h>
using namespace std;
struct tree {
    int data;
    int size=0;
    tree *left;
    tree *right;
};
int findheight(tree *p) {
if(p==NULL) return 0;
return (max(findheight(p->left), findheight(p->right))+1);
}
int heightDifference(tree *p)
{
    int left=findheight(p->left);
    int right=findheight(p->right);
    return (left-right);
}
tree *leftleft(tree *root)
{
    tree *ptr;
    ptr=root->left;
    root->left=ptr->right;
    ptr->right=root;
    return ptr;
}
tree *rightright(tree *root)
{
    tree *ptr;
    ptr=root->right;
    root->right=ptr->left;
    ptr->left=root;
    return ptr;
}
tree *leftright(tree *root)
{
    tree *ptr;
    ptr=root->left;
    root->left=rightright(ptr);
    return leftleft(root);
}
tree *rightleft(tree *root)
{
    tree *ptr;
    ptr=root->right;
    root->right=leftleft(ptr);
    return rightright(root);
}
tree *balancing(tree *root)
{
    if(heightDifference(root)>1)
    {
        if(heightDifference(root->left)>0)
        root=leftleft(root);
        else
        root=leftright(root);
    }
    else if(heightDifference(root)<-1)
    {
        if(heightDifference(root->right)>0)
        root=rightleft(root);
        else
        root=rightright(root);
    }
    return root;
}
tree *insert(tree* root, int data)
{
    if (root == NULL) {
      root = new tree;
      root->data = data;
      root->left = NULL;
      root->right = NULL;
      return root;
   } 
   else if (data< root->data) {
      root->left = insert(root->left, data);
      root = balancing(root);
   } else if (data >= root->data) {
      root->right = insert(root->right, data);
      root = balancing(root);
   }
   root->size+=1; 
   return root;
}
tree *getsuccessor(tree *current)
{
    current = current->right;
    while (current != NULL && current->left != NULL)
        current = current->left;
    return current;
}
tree *delnode(tree *ptr, int data)
{
    if (ptr == NULL)
        return ptr;
    if (ptr->data > data)
        ptr->left = delnode(ptr->left, data);
    else if (ptr->data < data)
        ptr->right = delnode(ptr->right, data);
    else
    {
        if (ptr->left == NULL)
        {
            tree *temp = ptr->right;
            delete ptr;
            return temp;
        }
        else if (ptr->right == NULL)
        {
            tree *temp = ptr->left;
            delete ptr;
            return temp;
        }
        else
        {
            tree *successor = getsuccessor(ptr);
            ptr->data = successor->data;
            ptr->right = delnode(ptr->right, successor->data);
        }
    }
    return ptr;
}
void display(tree *root)
{
    if(root==NULL)
    return;
    else
    {
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);        
    }
}
int main()
{
    int c, data,n;
    bool res;
    tree *root = NULL;
    bool flag = true;
    while (flag)
    {
        cout << "--------------------------------------" << endl;
        cout << "enter 1 to insert a element in a AVL tree" << endl
             << "enter 2 to delete a element from a BST" << endl;
        cout << "enter 3 to display the tree in inorder form" << endl<<"enter 4 to exit"<<endl
             << "enter your choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "enter the number of elements: ";
            cin >> n;
            for(int i=1;i<=n;i++)
            {
                cin>>data;
                root = insert(root, data);
            }
            cout << "all the "<<n<<" elements are inserted successfully" << endl;
            break;
        case 2:
            if (root->size == 0)
                cout << "the AVL tree is already empty nothing to delete" << endl;
            else
            {
                cout << "enter the data to be deleted in a AVL tree: ";
                cin >> data;
                root = delnode(root, data);
                root = balancing(root);
                cout << "the node with data " << data << " is deleted successfully" << endl;
                root->size -= 1;
            }
            break;
        case 3:
            display(root);
            cout<<endl;
            break;
        case 4:
            flag = false;
            break;
        default:
            cout << "INVALID CHOICE" << endl;
            break;
        }
    } 
    return 0;
}