#include "binary_trees.h"
/**
 * binary_tree_delete - Used to emove the nodes
 *@tree: nodes to be deleted
 *Free:remaove the nodes
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
