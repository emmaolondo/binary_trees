#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value:  the value to store in the new node
 * Return: NULL or pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->n = value;
	newNode->right = NULL;
	/** newNode->parent = parent;*/
	newNode->left = NULL;

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = newNode;
		newNode->left = temp;
		newNode->parent = parent;
		temp->parent = newNode;
		/**
		 * newNode->left = parent->left;
		 * parent->left->parent = newNode;
		 * parent->left->left = NULL;
		 */
	}
	else
	{
		parent->left = newNode;
		newNode->parent = parent;
	}

	return (newNode);
}
