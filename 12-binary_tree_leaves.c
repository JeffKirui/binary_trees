#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts leaves in binary tree.
 * @tree: Pointer to root node of tree to count leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t binary_leaves = 0;

	if (tree)
	{
		binary_leaves += (!tree->left && !tree->right) ? 1 : 0;
		binary_leaves += binary_tree_leaves(tree->left);
		binary_leaves += binary_tree_leaves(tree->right);
	}
	return (binary_leaves);
}
