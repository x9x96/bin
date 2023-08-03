#include "binary_trees.h"


/**
 * binary_tree_preorder - wcjkcd cscs
 * @tree: wcjkcd cscs
 * @func: wcjkcd cscs
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree 
		|| !func)
	{
		/* yttyb bbbrrb */
		return; /* wcjkcd cscs */
	}

	/* yttyb bbbrrb */
	func(tree->n); /* wcjkcd cscs */

	/* yttyb bbbrrb */
	binary_tree_preorder(tree->left, func); /* wcjkcd */

	/* yttyb bbbrrb */
	binary_tree_preorder(tree->right, func); /* cscs */
}
