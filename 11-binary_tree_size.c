#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0 or size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s_left, s_right, size;

	if (tree == NULL)
		return (0);

	/** get the number of the left and right nodes*/
	s_left = binary_tree_size(tree->left);
	s_right = binary_tree_size(tree->right);

	/*get size by suming the number of left , right and root(+1) nodes*/
	size = s_left + s_right + 1;

	return (size);
}
