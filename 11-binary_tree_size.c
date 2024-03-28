#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *Return: return size of root
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_t = 0, right_t = 0;

	if (tree == NULL)
		return (0);
	left_t = binary_tree_size(tree->left);
	right_t = binary_tree_size(tree->right);
	return (left_t + 1 + right_t);
}
