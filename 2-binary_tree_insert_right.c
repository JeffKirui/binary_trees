#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts node as right-child
 *                            of another in binary tree.
 * @parent: Pointer to node to insert right-child in.
 * @value: Value to store new node.
 *
 * Return: NULL if Parent is NULL, else
 *         pointer to the new node.
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
