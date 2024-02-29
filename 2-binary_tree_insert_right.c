#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node
 * as the right-child of another node.
 * @parent: The pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Description: If parent already has a right-child,the new node must take
 * its place,and the old right-child must be set as the right-child
 * of the new node.
 * Return: Returns a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	if (parent->right == NULL)
	{
		parent->right = node;
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;
	}
	else
	{
		binary_tree_t *right_child = parent->right;

		parent->right = node;
		node->right = right_child;
		node->parent = parent;
		node->left = NULL;
		right_child->parent = node;
	}

	return (node);
}
