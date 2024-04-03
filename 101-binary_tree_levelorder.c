#include "binary_trees.h"
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	const binary_tree_t *queue[100];
	int front = 0, rear = 0;
	queue[rear++] = tree;
	while (front < rear)
	{
		const binary_tree_t *current = queue[front++];
		(*func)(current->n);
		if (current->left)
			queue[rear++] = current->left;
		if (current->right)
			queue[rear++] = current->right;
	}
}
