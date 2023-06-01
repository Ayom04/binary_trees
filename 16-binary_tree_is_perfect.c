#include "binary_trees.h"
/**
 * comparing_depth - compare size
 *
 * @tree: pointer to the root
 * Return: size
 */
int comparing_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (comparing_depth(tree->left) + 1 + comparing_depth(tree->right));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	height_left = comparing_depth(tree->left);
	height_right = comparing_depth(tree->right);

	if ((height_left - height_right) == 0)
		return (1);

	return (0);
}
