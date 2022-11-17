#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the node is a leaf
 * @node: pointer to the node to check
 * Return: i or 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
