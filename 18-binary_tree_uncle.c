#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a given node in a binary tree
 * @node: A pointer to the node to find the uncle
 *
 * Return: A pointer to the uncle node, or NULL if no uncle is found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (grandparent == NULL)
		return (NULL);
	if (grandparent->left && grandparent->right)
	{
		if (parent == grandparent->left)
			return (grandparent->right);
		return (grandparent->left);
	}

	return (NULL);
}
