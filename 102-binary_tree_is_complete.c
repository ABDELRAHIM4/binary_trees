#include "binary_trees.h"
/**
 * check - To make sure if  the tree is complete
 *@current: pointer to node
 *Return: return 1 if complete 0 otherwise
 */
int check(const binary_tree_t *current)
{
	if (current == NULL)
		return (0);
	if (current->left == NULL && current->right != NULL)
		return (0);
	else if (current->left != NULL && current->right == NULL)
		return (0);
	else if (current->left != NULL && current->right->left != NULL)
		current = current->right;
	else
		current = NULL;
	return (1);
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *@tree: pointer to the root node of the tree to check
 *Return: return 1 if complete otherwise 0
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *second = tree;
	const binary_tree_t *current = tree;
	int com = 1;

	if (tree == NULL)
		return (0);
	while (current != NULL)
	{
		if (check(current->left) == 0 || check(current->right) == 0)
			com = 0;
		else if (current->left != NULL && current->right != NULL)
			com = 1;
		else if (current->left == NULL && current->right == NULL)
			com = 1;
		else
			com = 0;
		current = current->left;
	}
	while (second != NULL)
	{
		if (check(second->left) == 0 || check(second->right) == 0)
			com = 0;
		if (second->left != NULL && second->right != NULL)
			com = 1;
		if (second->left == NULL && second->right == NULL)
			com = 1;
		else
			com = 0;
		second = second->left;
	}
	return (com);
}
