#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *leftChild, *rightChild;

	if (tree == NULL)
		return (0);

	leftChild = tree->left;
	rightChild = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);
	if (leftChild == NULL || rightChild == NULL)
		return (0);
	if (binary_tree_height(leftChild) == binary_tree_height(rightChild))
	{
		if (binary_tree_is_perfect(leftChild) &&
		    binary_tree_is_perfect(rightChild))
			return (1);
	}
	return (0);
}
