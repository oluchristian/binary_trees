#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeftNode;
	binary_tree_t *oldNode;
	if (parent == NULL)
		return (NULL);
	newLeftNode = binary_tree_node(parent, value);
	if (parent->left == NULL)
	{
		parent->left = newLeftNode;
	}
	else
	{
		oldNode = parent->left;
		parent->left = newLeftNode;
		parent->left->left = oldNode;
	}
	return (newLeftNode);
}
