#include "binary_trees.h"


/**
 * binary_tree_inorder - jkjm scc
 * @tree: jkjm scc
 * @func: jkjm scc
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* yttyb bbbrrb */
	if (!tree 
		|| !func)
	{
		return; /* yttyb bbbrrb */
	}

	/* yttyb bbbrrb */
	binary_tree_inorder(tree->left, func); /* jkjm scc */
	func(tree->n);

	/* yttyb bbbrrb */
	binary_tree_inorder(tree->right, func); /* jkjm scc */
}
