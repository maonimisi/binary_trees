#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if full, otherwise 0. If tree is NULL, return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_node = binary_tree_is_full(tree->left);
	right_node = binary_tree_is_full(tree->right);
	if (left_node == 0 || right_node == 0)
		return (0);
	return (1);
}
