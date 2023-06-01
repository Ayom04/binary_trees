#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowes
 * @first: Pointer
 * @second: Pointer
 *
 * Return: Pointer
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *first_ancestor, *second_ancestor;

	for (first_ancestor = first; first_ancestor; first_ancestor = first_ancestor->parent)
		for (second_ancestor = second; second_ancestor; second_ancestor = second_ancestor->parent)
			if (first_ancestor == second_ancestor)
				return ((binary_tree_t *)first_ancestor);
	return (NULL);
}
