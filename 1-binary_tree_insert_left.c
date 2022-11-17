#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node on the left-child of a node
 * @parent: pointer to the node inserted in the left-child
 * @value: value store in the node
 * Return: pointer to the created node or null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
