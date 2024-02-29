#include "binary_trees.h"

/**
 * binary_tree_inorder - Perform a pre-order traversal on a binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node. The value in the node
 *        must be passed as a parameter to this function.
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/**
	 * Recursively traverse the left subtree
	*/
	binary_tree_inorder(tree->left, func);
	/**
	 * Visit the current node
	*/
	func(tree->n);
	/**
	 * Recursively traverse the right subtree
	*/
	binary_tree_inorder(tree->right, func);
}