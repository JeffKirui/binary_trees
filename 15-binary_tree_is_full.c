#include "binary_trees.h"

/**
 * is_full_recursive - Function that checks if binary tree is full.
 * @tree: Pointer to root node of tree to check.
 *
 * Return: If tree is not full (0), Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				is_full_recursive(tree->left) == 0 ||
				is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Func checks if binary tree is full.
 * @tree: Pointer to root node of tree to check.
 *
 * Return: If tree is NULL or is not full (0), otherwise, return 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full_recursive(tree));
}
