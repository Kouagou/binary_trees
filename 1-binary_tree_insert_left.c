#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node
 * as the left-child of another node.
 * @parent: The pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Description: If parent already has a left-child,the new node must take
 * its place,and the old left-child must be set as the left-child
 * of the new node.
 * Return: Returns a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	if (parent->left == NULL)
	{
		parent->left = node;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}
	else
	{
		binary_tree_t *left_child = parent->left;

		parent->left = node;
		node->left = left_child;
		node->parent = parent;
		left_child->parent = node;
		left_child->left = NULL;
                left_child->right = NULL;
	}

	return (node);
}
