#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 *
 * @parent: The parent node of the new node
 * @value: The data to store in the new
 *
 * Return: Pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	bianry_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
