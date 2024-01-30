#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if node is root of binary tree.
 * @node: Pointer to node to check.
 *
 * Return: -1 if the node is a root, else 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
