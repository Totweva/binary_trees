#include "binary_trees.h"

/**
 * binary_tree_depth - checks the depth of a node of a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 1 or 0 if the tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
