#include "binary_trees.h"
/*
 * binary_tree_node - a function that creates a binary tree node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * When created, a node does not have any child
 * Return: NULL or pointer to the new parentnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodeptr = malloc(sizeof(binary_tree_t));

	if (newNodeptr == NULL)
		return (NULL);
	newNodeptr->n = value;
	newNodeptr->left = NULL;
	newNodeptr->parent = parent;
	newNodeptr->right = NULL;

	return (newNodeptr);
}
