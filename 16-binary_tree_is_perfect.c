#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree
 *Return: 1 if tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (!tree)
		return (0);

	left_depth = binary_tree_height(tree->left) + 1;
	right_depth = binary_tree_height(tree->right) + 1;

	if (left_depth == right_depth)
		return (1);
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *Return: height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = 1 + binary_tree_height(tree->left);
	r_height = 1 + binary_tree_height(tree->right);

	return (l_height > r_height ? l_height : r_height);
}
