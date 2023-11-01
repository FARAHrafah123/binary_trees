#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: binary tree
 * Return: 1 if full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
