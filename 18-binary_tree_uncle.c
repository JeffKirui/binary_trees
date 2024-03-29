#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node in binary tree.
 * @node: Pointer to node to find uncle.
 *
 * Return: Null if node is NULL or has no uncle, else pointer to uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
