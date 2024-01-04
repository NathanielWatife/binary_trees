#include "binary_trees.h"

/**
 * binary_tree_t - Insert a node as the left-child of 
 * another node
 * @parent - pointer to the node to insert the left-child
 * @value - Stored in new node
 * 
 * Return: If parent is NULL or error - NULL.
 *         Otherwise - a pointer to the new node.
 * 
 * Description: If parent already has a left-child, the new node
 * takes its place.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
	return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);


}