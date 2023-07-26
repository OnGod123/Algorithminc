#include <stdio.h>
#include <stdlib.h>
typedef struct treenode
{
    int value;
    struct treenode* left;
    struct treenode* right;
}tree;
void print_tree(tree* root)
{
    if (root == NULL)
    {
        printf("--<empty tree\n>");
        return;
    }
    printf("%d\n", root->value);
    printf("left\n");
    print_tree(root->right);
    printf("rigt\n");
    print_tree(root->left);
    printf("done");
}

tree* create_tree(int v)
{
    tree* tree_node = (tree*)malloc(sizeof(tree));
    tree_node->value = v;
    tree_node->left = NULL;
    tree_node->right = NULL;
}
tree* create_tree(int);
int main()
{
    tree* tree1 = create_tree(45);
    tree* tree2 = create_tree(34);
    tree* tree3 = create_tree(23);
    tree* tree4 = create_tree(43);

    tree1->right = tree2;
    tree1->left = tree3;
    tree2->right = tree4;
    tree2->left = NULL;
    print_tree(tree1);

}
