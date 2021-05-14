#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node *newnode(int data)
{
    node *ptr = new node();
    ptr->data = data;
    ptr->left = ptr->right = NULL;
    return ptr;
}
node *insert(node *root, int data)
{
    if (root == NULL)
        root = newnode(data);
    else if (data <= root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}
bool search(node *root, int data)
{
    if (root == NULL)
        return false;
    else if (data == root->data)
        return true;
    else if (data <= root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}
node* FindMin(node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}
node* Delete(node *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			struct node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
int main()
{
    node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 25);
    root = insert(root, 23);
    root = insert(root, 65);
    root = insert(root, 9);
    root = insert(root, 4);
    root = insert(root, 45);
    root = insert(root, 9);
    root = insert(root, 90);
    root = insert(root, 100);
    root = Delete(root, 9);
    bool check = search(root, 2);
    if (check == true)
        cout << "the element is present in the tree" << endl;
    else
        cout << "the element is not pesent in the tree" << endl;

    return 0;
}