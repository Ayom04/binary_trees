#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *  return 0, If tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l_f = 0, h_r_g = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_l_f = 1 + binary_tree_height(tree->left);
	if (tree->right)
		h_r_g = 1 + binary_tree_height(tree->right);

	if (h_l_f > h_r_g)
		return (h_l_f);
	return (h_r_g);
}
