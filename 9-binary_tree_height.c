#include "binary_trees.h"


/**
 * binary_tree_height - b dmd n ss d
 * @tree: b dmd n ss d
 *
 * Return: b dmd n ss d
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	/* vjkbv dk  k cwds */
	size_t rb007 = 0; /* vjkbv dk  k cwds */
	/* vjkbv dk  k cwds */
	size_t rb008 = 0; /* vjkbv dk  k cwds */

	/* b dmd n ss d */
	if (!tree)
	{
		return (0); /* vjkbv dk  k cwds */
	}

	/* b dmd n ss d */
	rb007 = tree->left ? 1 + binary_tree_height(tree->left) : 0; /* b dd */
	/* b dmd n ss d */
	rb008 = tree->right ? 1 + binary_tree_height(tree->right) : 0; /* b*/
	/* b dmd n ss d */
	return (rb007 > rb008 ? rb007 : rb008); /* vjkbv dk  k cwds */
}
