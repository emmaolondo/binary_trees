#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	if (left_height >= right_height)
		return (left_height);
	else
		return (right_height);
}

/**
 * binary_tree_balance - a function that measures the balance factor
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((binary_tree_height(tree->left) - binary_tree_height(tree->right)));
}
