#include "binary_trees.h"

int check(const binary_tree_t *current)
{
	//int com = 0;
	if (current == NULL)
                return (0);
       	if (current->left == NULL && current->right != NULL)
        	return (0);
        if (current->left != NULL && current->right == NULL)
                return(0);
	return (1);
}
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_height = 0, right_height = 0;

        if (tree == NULL)
                return (0);

        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        if (left_height > right_height)
                return (left_height + 1);
        else
                return (right_height + 1);
}
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	//const binary_tree_t *second = tree;
        int com = 1, left_h = 0, right_h = 0;
	
	if (tree == NULL)
		return (0);
	while (current)
	{
		if (check(current->left) == 0 || check(current->right) == 0)
			com = 0;

                        /*if (second->left != NULL && second->right != NULL)
                                com = 1;
                        if (second->left == NULL && second->right == NULL)
                                com = 1;
                        else
                                com = 0;*/
                if (current->left != NULL && current->right != NULL)
			{
			left_h = binary_tree_height(current->left);
                        right_h = binary_tree_height(current->right);

                        if (left_h != right_h)
                                com = 0;
                	current = current->left;
			}
                else if (current->left != NULL)
                        	current = current->right;
                else
                        	current = NULL;/*
			check(current->left);
			 check(current->right);
			 current = current->left;*/
	}
	return (com);
}
