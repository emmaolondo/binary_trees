#include "binary_trees.h"
/**
 * binary_tree_insert_right -  a function that inserts a node
 * as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: NULL or pointer to the created node
 * NOTE -- If parent already has a right-child, the new node must take its \
 * place, and the old right-child must be set as the right-child of the new
 * node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = newNode;
		newNode->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
		newNode->parent = parent;
		temp->parent = newNode;
		temp->right = NULL;
	}
	return (newNode);
}
