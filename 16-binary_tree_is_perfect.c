#include "binary_trees.h"
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

	height_left = compare_depth(tree->left);
	height_right = compare_depth(tree->right);

	if ((height_left - height_right) == 0)
		return (1);

	return (0);
}
