#ifndef _BINARY_TREE_
#define _BINARY_TREE_
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);

//print binary tree
void binary_tree_print(const binary_tree_t *tree);
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
static size_t _height(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);
// close print
// typedef struct treenode
// {
// 	int value;
// 	struct treenode *left;
// 	struct treenode *right;
// } treenode;

// treenode *createnode(int value)
// {
// 	treenode *result = malloc(sizeof(treenode));
// 	if (result != NULL)
// 	{
// 		result->left = NULL;
// 		result->right = NULL;
// 		result->value = value;
// 	}
// 	return result;
// }
// void printtree_rec(treenode *root, int level)
// {
// 	if (root == NULL)
// 	{
// 		printf("---<empty>--\n");
// 		return;
// 	}
// 	printf("value = %d\n", root->value);
// 	printf("left\n");
// 	printtree(root->left);
// 	printf("right\n");
// 	printtree(root->right);
// 	printf("done\n");
// }
#endif
