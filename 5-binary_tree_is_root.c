#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: A pointer to the node to check
 * Return: 1 if node is a root, 0 if not a root or if NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
