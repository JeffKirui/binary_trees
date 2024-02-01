#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures balance factor of binary tree.
 * @tree: Pointer to root node of tree to measure balance factor.
 *
 * Return: If tree is NULL (0), else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Func measures height of binary tree.
 * @tree: Pointer to root node of tree to measure height.
 *
 * Return: If tree is NULL (0), else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t ht_left = 0, ht_right = 0;

		ht_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		ht_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((ht_left > ht_right) ? ht_left : ht_right);
	}
	return (0);
}
