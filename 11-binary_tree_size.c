#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Description: If tree is NULL, the function must return 0.
 * Return: Return the size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}
