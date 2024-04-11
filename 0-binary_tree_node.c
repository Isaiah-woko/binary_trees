#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to parent node
 * @value: the value in the node
 * Return: pointer to new node or null
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_new_node;

	bt_new_node = malloc(sizeof(binary_tree_t));

	if (bt_new_node == NULL)
	{
		return (NULL);
	}

	bt_new_node->parent = parent;
	bt_new_node->n = value;
	bt_new_node->left = NULL;
	bt_new_node->right = NULL;

	return (bt_new_node);
}
