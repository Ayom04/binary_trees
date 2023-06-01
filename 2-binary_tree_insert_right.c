#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent:  a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node,
 *	or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *_new = NULL;

	if (!parent)
		return (NULL);

	_new = malloc(sizeof(binary_tree_t));

	if (!_new)
		return (NULL);

	_new->n = value;
	_new->left = NULL;

	if (parent->right == NULL)
	{
		_new->parent = parent;
		_new->right = NULL;
		parent->right = _new;
	}
	else
	{
		_new->parent = parent;
		_new->right = parent->right;
		parent->right = _new;
		_new->right->parent = _new;
	}
	return (_new);
}
