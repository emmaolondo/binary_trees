#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: node pointer
 * Return: 0 or number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r_leaf, l_leaf;

	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	l_leaf = binary_tree_leaves(tree->left);
	r_leaf = binary_tree_leaves(tree->right);

	return (r_leaf + l_leaf);
}
