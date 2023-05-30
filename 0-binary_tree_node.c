#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree  node
 * 
 * @parent: pointer to the the parent node
 * @value: value to put in the new node
 * Return: a pointer to the node
 * or NULL if the node is on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *created_node = NULL;

	created_node = malloc(sizeof(binary_tree_t));
	if (!created_node)
		return (NULL);

	created_node->parent = parent;
	created_node->n = value;
	created_node->left = NULL;
	created_node->right = NULL;
	return (created_node);
}
