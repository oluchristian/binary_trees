#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the parent node.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node or NULL if parent is NULL or on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
