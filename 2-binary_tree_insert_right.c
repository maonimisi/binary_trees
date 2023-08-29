#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child of another node
 * @parent: pointer to the node, insert the right child into
 * @value: paremeter that stores value to store in the new node
 * Return: pointer to new node
 * if it fails or if parent is (null) return (null)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
