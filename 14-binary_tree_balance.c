#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: height
 * If tree is NULL, return 0
 */

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height_balance(tree->right);

	if (height_left > height_right)
		return (height_left);
	return (height_right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height_balance(tree->right);
	return (height_left - height_right);
}
