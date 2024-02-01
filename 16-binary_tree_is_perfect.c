#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures depth of binary tree
 * @tree: Node to measure
 *
 * Return: The depth of the tree
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

/**
 * binary_tree_height - Function that measures height of binary tree
 * @tree: Node to measure
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht_left;
	size_t ht_right;

	if (tree == NULL)
		return (0);

	ht_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	ht_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (ht_left > ht_right ? ht_left : ht_right);
}

/**
 * is_perfect - Function that checks if binary tree is perfect
 * @tree: Tree to check
 * @height: Height of tree to check
 *
 * Return: Integer
 */
int is_perfect(const binary_tree_t *tree, int height)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
	{
		depth = binary_tree_depth(tree);
		if (depth == height)
			return (1);
		return (0);
	}

	return (is_perfect(tree->left, height) && is_perfect(tree->right, height));
}

/**
 * binary_tree_is_perfect - Function that checks if binary tree is perfect
 * @tree: Tree to check
 *
 * Return: integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	return (is_perfect(tree, height));
}
