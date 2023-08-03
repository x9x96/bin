#include "binary_trees.h"


/**
 * binary_tree_delete - jbjbr  vefec
 * @tree: jbjbr  vefec
 */


void binary_tree_delete(binary_tree_t *tree)
{
	/* jbjbr  vefec */
	if (!tree)
	{
		return;
	}

	/* jbjbr  vefec */
	binary_tree_delete(tree->right); /* jbjbr  vefec */

	/* jbjbr  vefec */
	binary_tree_delete(tree->left); /* jbjbr  vefec */

	/* jbjbr  vefec */
	free(tree); /* jbjbr  vefec */
	/* jbjbr  vefec */
}
