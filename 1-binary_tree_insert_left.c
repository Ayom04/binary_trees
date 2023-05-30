#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent:  a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: pointer to the created new node. NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *p_left = NULL, *created_node = NULL;

	if (!parent)
		return (NULL);
	created_node = malloc(sizeof(binary_tree_t));

	if (!created_node)
		return (NULL);

	created_node->parent = parent;
	created_node->left = NULL;
	created_node->right = NULL;
	created_node->n = value;

	p_left = parent->left;
	parent->left = created_node;

	if (p_left)
	{
		p_left->parent = created_node;
		created_node->left = p_left;
	}

	return (created_node);
}
