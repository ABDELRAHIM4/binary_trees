#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *ancestor = first;

    /* If first is NULL, second cannot be a descendant of first */
    if (!first)
        return (NULL);

    /* Traverse up the tree while first and second are not the same node */
    while (ancestor && ancestor != second)
        ancestor = ancestor->parent;

    return ((binary_tree_t *)ancestor);
}
