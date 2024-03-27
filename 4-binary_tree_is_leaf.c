#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Check if the node is the last node
 *@node: pointer to node that want to check it
 *Return: 1 if it is last and 0 otherwise
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
