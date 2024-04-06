#include "binary_trees.h"
/**
 * depth_t - Return the depth
 *@node : the node
 *Return: the depth
 */
size_t depth_t(const binary_tree_t *node)
{
	size_t dep = 0;

	if (node == NULL)
		return (dep);
	while (node->parent)
	{
		node = node->parent;
		dep++;
	}
	return (dep);
}
/**
 *  binary_t - if the current equal to node
 * @ans: the current
 *@node: the node
 *Return: the result of comparing
*/
int binary_t(const binary_tree_t *ans, const binary_tree_t *node)
{
	const binary_tree_t *current = node;

	while (current)
	{
		if (ans == current)
		{
			return (1);
		}
		current = current->parent;
	}
	return (0);
}
/**
 * binary_trees_ancestor - Finds the lowest ancestor
 *@first: pointer to the first node
 *@second: pointer to the second node
 *Return: the parent of the nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t depth_f = 0, depth_s = 0;
	binary_tree_t *current;

	if (!first || !second)
	{
		return (NULL);
	}
	depth_f = depth_t(first);
	depth_s = depth_t(second);
	current = depth_f > depth_s ? first->parent : second->parent;
	while (depth_f != depth_s)
	{
		if (depth_f > depth_s)
		{
			first = first->parent;
			depth_f--;
		}
		else
		{
			second = second->parent;
			depth_s--;
		}
	}
	current = (binary_tree_t *)first;
	while (current)
	{
		if (current == second->parent)
			return (current);
		current = current->parent;
	}
	return (NULL);
}
