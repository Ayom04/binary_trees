#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0, If tree is NULL
 * A NULL pointer is not a node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		node_count = 1;

	node_count += binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);

	return (node_count);
}
