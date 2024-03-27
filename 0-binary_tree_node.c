#include "binary_trees.h"

/**
 * binary_tree_node - Create new node
 *
 * @parent : pointer to the parent node of the node to create
 * @value : The value to put in the new node
 *
 * Return: return the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;
	return (new);
}
