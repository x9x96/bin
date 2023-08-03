#include "binary_trees.h"


/**
 * binary_tree_depth - hdd j c ds
 * @tree: hdd j c ds
 *
 * Return: hdd j c ds
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* b dmd n ss d */
	size_t rb009 = 0; /* b dmd n ss d */

	/* hdd j c ds */
	if (!tree)
	{
		/* hdd j c ds */
		return (0); /* b dmd n ss d */
	}

	/* hdd j c ds */
	while (tree->parent)
	{
		/* hdd j c ds */
		rb009++; /* b dmd n ss d */
		/* hdd j c ds */
		tree = tree->parent; /* b dmd n ss d */
	}

	/* hdd j c ds */
	return (rb009); /* b dmd n ss d */
}
