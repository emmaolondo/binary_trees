#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0 or counts of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	node +=  binary_tree_nodes(tree->left);
	node +=  binary_tree_nodes(tree->right);

	return (node + 1);
}
