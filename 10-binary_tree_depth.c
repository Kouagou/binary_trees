#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth
 * of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Description: If tree is NULL, your function must return 0.
 * Return: Return the depth of the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (depth);
}
