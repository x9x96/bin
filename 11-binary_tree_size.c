#include "binary_trees.h"


/**
 * binary_tree_size -  jf jv sdvk
 * @tree: jf jv sdvk
 *
 * Return: jf jv sdvk
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	/* hdd j c ds */
	if (!tree)
	{
		/* jf jv sdvk */
		return (0); /* hdd j c ds */
	}

	/* hdd j c ds */
	return (binary_tree_size(tree->left)
		+ binary_tree_size(tree->right) + 1); /* ds */
}
