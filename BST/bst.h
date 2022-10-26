// Isabel Ovalles
// bst.h

class BST
{
    private: 
        class TreeNode{
            int value; 
            TreeNode* right;
            TreeNode* left; 
        }; 

    TreeNode* root; 

    void insert(int value);

    void deleteNode(int value);

    void clearTree();

    void printTree();

    int findAncestor(int value);

    int getHeight(); 

    bool isBalanced();
    
};