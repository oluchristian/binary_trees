#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node in the binary tree, 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;
	size_t right_depth;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		count = 1 + binary_tree_depth(tree->parent);
	return (count);
}
