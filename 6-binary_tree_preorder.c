#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal
 * @tree: pointer to the root node of the tree
 * Return: void
**/

void binary_tree_preorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
