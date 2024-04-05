#include "binary_trees.h"
/*
int check(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	int com = 0;
	while (current != NULL)
	{
                if (current->left != NULL && current->right != NULL)
                        com = 1;
                if (current->left == NULL && current->right == NULL)
                        com = 1;
                else
                        com = 0;
	}
	return (com);
}*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	const binary_tree_t *second = tree;
        int com = 0;
	
	if (tree == NULL)
		return (0);
	while (second != NULL)
	{
                        if (second->left != NULL && second->right != NULL)
                                com = 1;
                        if (second->left == NULL && second->right == NULL)
                                com = 1;
                        else
                                com = 0;
			second = second->left;

		
	}
	while (current)
	{
                	if (current->left != NULL && current->right != NULL)
                        	com = 1;
                	if (current->left == NULL && current->right == NULL)
                        	com = 1;
                	else
                        	com = 0;
			current = current->right;
	}
	return (com);
}
