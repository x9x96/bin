#include "binary_trees.h"


/**
 * binary_tree_height_b -  jnf vv fv v
 * @tree: jnf vv fv v
 * Return: jnf vv fv v
 */


size_t binary_tree_height_b(const binary_tree_t *tree)
{
	/* jnf vv fv v */
	size_t rb013 = 0; /* jnf vv fv v */

	/* jnf vv fv v */
	size_t rb014 = 0; /* jnf vv fv v */

	/* jnf vv fv v */
	if (!tree)
	{
		/* jnf vv fv v */
		return (0); /* jnf vv fv v */
	}
	/* jnf vv fv v */
	else
	{
		/* jnf vv fv v */
		if (tree != NULL)
		{
			rb013 = tree->left ? 1
				+ binary_tree_height_b(tree->left) : 1; /* fv v */
			rb014 = tree->right ? 1
				+ binary_tree_height_b(tree->right) : 1; /* fv v */
		}
		/* jnf vv fv v */
		return ((rb013 > rb014) ? rb013 : rb014); /* fv v */
	}
}


/**
 * binary_tree_balance - jnf vv fv v
 * @tree: jnf vv fv v
 * Return: jnf vv fv v
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	/* jnf vv fv v */
	int rb010 = 0; /* jnf vv fv v */
	/* jnf vv fv v */
	int rb012 = 0; /* jnf vv fv v */
	/* jnf vv fv v */
	int rb011 = 0; /* jnf vv fv v */

	/* jnf vv fv v */
	if (tree != NULL)
	{
		/* jnf vv fv v */
		rb011 = ((int)binary_tree_height_b(tree->left)); /* fv v */
		/* jnf vv fv v */
		rb010 = ((int)binary_tree_height_b(tree->right)); /* fv v */
		/* jnf vv fv v */
		rb012 = rb011 - rb010; /* fv v */
	}
	/* jnf vv fv v */
	return (rb012);
}
