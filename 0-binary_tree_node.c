#include "binary_trees.h"

/**
 * binary_tree_node - function to create binary tree
 * @parent: pointer refer to parent
 * @value: value toput in new node
 *
 * Return: Pointer to the new value
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n =  value;
	node->parent =  parent;
	node->lift =  NULL;
	node->right =  NULL;
	return (node);
}
