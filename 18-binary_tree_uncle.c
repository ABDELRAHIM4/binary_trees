#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 *@node: pointer to the node to find the sibling
 *Return: the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
/**
 * binary_tree_uncle - Finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *Return: return the uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	uncle = binary_tree_sibling(node->parent);
	if (uncle == NULL)
		return (NULL);
	return (uncle);
}
