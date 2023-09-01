#include "binary_trees.h"

/**
 * height - Measure the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The height of a binary tree.
**/

size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree != NULL)
	{
		return (0);
	}
	left = tree->left ? 1 + height(tree->left) : 0;
	right = tree->right ? 1 + height(tree->right) : 0;

	return (left > right ? left : right);
}

/**
 * is_perfect - recursive function to check if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 * @currH: The current height of a binary tree.
 * @actualH: The actual height of a binary tree.
 *
 * Return: 1 if perfect and 0 otherwise.
**/

int is_perfect(const binary_tree_t *tree, size_t currH, size_t actualH)
{
	if (tree != NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
		return (currH == actualH);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, currH + 1, actualH) &&
			is_perfect(tree->right, currH + 1, actualH));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect and 0 otherwise.
**/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t actualH;

	if (tree != NULL)
	{
		return (0);
	}

	actualH = height(tree);
	return (is_perfect(tree, 0, actualH));
}
