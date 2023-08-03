#include "binary_trees.h"


/**
 * binary_tree_postorder - vjkbv dk  k cwds
 * @tree: vjkbv dk  k cwds
 * @func: vjkbv dk  k cwds
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* jkjm scc */
	if (!tree || !func)
	{
		/* vjkbv dk  k cwds */
		return; /* jkjm scc */
	}

	/* vjkbv dk  k cwds */
	binary_tree_postorder(tree->left, func); /* jkjm scc */
	/* vjkbv dk  k cwds */
	binary_tree_postorder(tree->right, func); /* jkjm scc */
	/* vjkbv dk  k cwds */
	func(tree->n); /* jkjm scc */
}
