#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRightNode;
	binary_tree_t *oldNode;
	if (parent == NULL)
		return (NULL);
	newRightNode = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		parent->right = newRightNode;
	}
	else
	{
		oldNode = parent->right;
		parent->right = newRightNode;
		parent->right->right = oldNode;
	}
	return (newRightNode);
}
