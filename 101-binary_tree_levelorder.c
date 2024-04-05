#include "binary_trees.h"
/**
 * binary_tree_levelorder - Goes through binary tree using level-ordertraverse
 *@tree: pointer to the root node of the tree to traverse
 *@func:pointer to a function to call for each node.
 *Return: return the node
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	const binary_tree_t **queue = malloc(sizeof(binary_tree_t *) *100);
	int front = 0, rear = 0;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		const binary_tree_t *current = queue[front++];

		(*func)(current->n);

		if (current->left)
			queue[rear++] = current->left;
		if (current->right)
			queue[rear++] = current->right;
	}
	free(queue);
}
