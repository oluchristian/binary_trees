#include "binary_trees.h"

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
