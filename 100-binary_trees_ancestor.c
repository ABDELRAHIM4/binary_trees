#include "binary_trees.h"
size_t depth_t(const binary_tree_t *node)
{
	size_t dep = 0;
	if (node == NULL)
		return (dep);
	while(node->parent)
	{
		node = node->parent;
		dep ++;
	}
	return (dep);
}
int binary_t(const binary_tree_t * ans, const binary_tree_t *node)
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
			current = current->parent;
			depth_f --;
		}
		else
		{
			current = current->parent;
			depth_s--;
		}
	}
	while(current && !(binary_t(current, first)) && !(binary_t(current, second)))
			current = current->parent;
	return (current);
}
