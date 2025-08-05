#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling or node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int key = node->n;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->left->n == key)
	{
	if (node->parent->right != NULL)
		return (node->parent->right);
	return (NULL);
	}

	if (node->parent->right != NULL && node->parent->right->n == key)
	{
	if (node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
	}
	return (NULL);
}
