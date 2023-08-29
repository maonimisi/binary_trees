#include "binary_trees.h"
/**
 * binary_tree_inorder - Uses in-order traversal to traverse binary tree
 * @tree: Pointer to the tree to traverse
 * @func: A pointer to a function to call for each node
 * Description: If tree or func are NULL, do nothing
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
