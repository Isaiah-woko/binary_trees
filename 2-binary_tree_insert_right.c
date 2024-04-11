#include "binary_trees.h"

/**
 * binary_tree_insert_right -a function that inserts
 * a node as the right-child of another node
 * @parent: pointer to parent node
 * @value: the value in the node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	/*updated code to reuse binary_tree_node function*/

	bt_new_node = binary_tree_node(parent, value);

	if (bt_new_node == NULL)
	{
		return (NULL);
	}

	if ((*parent).right != NULL)
	{
		(*bt_new_node).right = (*parent).right;
		(*parent).right->parent = bt_new_node;
	}

	(*parent).right = bt_new_node;

	return (bt_new_node);
}
