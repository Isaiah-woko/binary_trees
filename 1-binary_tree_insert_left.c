#include "binary_trees.h"

/**
 * binary_tree_insert_left -a function that inserts
 * a node as the left-child of another node
 * @parent: pointer to parent node
 * @value: the value in the node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	/*updated code to reuse binary_tree_node file*/

	bt_new_node = binary_tree_node(parent, value);

	if (bt_new_node == NULL)
	{
		return (NULL);
	}

	if ((*parent).left != NULL)
	{
		(*bt_new_node).left = (*parent).left;
		(*parent).left->parent = bt_new_node;
	}

	(*parent).left = bt_new_node;

	return (bt_new_node);
}
