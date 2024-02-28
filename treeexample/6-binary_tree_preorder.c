#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	// Visit the current node
	func(tree->n);
	// Recursively traverse the left subtree
	binary_tree_preorder(tree->left, func);
	// Recursively traverse the right subtree
	binary_tree_preorder(tree->right, func);
}
