#include "binary_trees.h"
/**
 * binary_tree_delete -  a function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* delete the left abd right subtress recursively*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/**free the current parent node */
	free(tree);
}
