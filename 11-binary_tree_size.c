#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures size of binary tree.
 * @tree: Pointer to root node of binary tree to measure the size.
 *
 * Return: Size of the tree on success, else the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree)
	{
		tree_size += 1;
		tree_size += binary_tree_size(tree->left);
		tree_size += binary_tree_size(tree->right);
	}
	return (tree_size);
}
