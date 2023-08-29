#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a given node
 * @node: A pointer to the node to analyze
 * Return: Pointer to sibling node or NULL if node is NULL, parent is NULL
 * or if no sibling exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
