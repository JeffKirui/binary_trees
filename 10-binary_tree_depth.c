#include "binary_trees.h"

/**
 * binary_tree_depth - Func measures depth of binary tree
 * @tree: The node to measure
 *
 * Return: The depth of binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
	{
		n = binary_tree_depth(tree->parent);
		n++;
	}
	return (n);
}
