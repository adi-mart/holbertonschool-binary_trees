#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		const binary_tree_t *tmp = tree->left;

		while (tmp)
		{
			left++;
			if (tmp->left)
				tmp = tmp->left;
			else if (tmp->right)
				tmp = tmp->right;
			else
				tmp = NULL;
		}
	}

	if (tree->right)
	{
		const binary_tree_t *tmp = tree->right;

		while (tmp)
		{
			right++;
			if (tmp->right)
				tmp = tmp->right;
			else if (tmp->left)
				tmp = tmp->left;
			else
				tmp = NULL;
		}
	}

	return (left - right);
}
