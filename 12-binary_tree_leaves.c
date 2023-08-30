#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree
 * to count the number of leaves.
 * Return: returns the number of leaves.
**/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
	{
		return (0);
	}

	leaves = !tree->left && !tree->right ? 1 : binary_tree_leaves(tree->left);
	leaves += !tree->left && !tree->right ? 0 : binary_tree_leaves(tree->right);
	return (leaves);
}
