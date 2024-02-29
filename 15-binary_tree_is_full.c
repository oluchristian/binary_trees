#include "binary_trees.h"
/**
 * binary_tree_is_full - Measures the fullness of a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 is the tree is full,
 *         or 0 if the tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
