#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds sibling of node in binary tree.
 * @node: Pointer to node to find sibling of.
 *
 * Return: Null if node is NULL or has no sibling, else pointer to sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
