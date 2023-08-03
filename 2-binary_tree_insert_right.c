#include "binary_trees.h"


/**
 * binary_tree_insert_right - jbj cjjwcdv
 * @parent: jbj cjjwcdv
 * @value: jbj cjjwcdv
 *
 * Return: jbj cjjwcdv
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* jbj cjjwcdv */
	binary_tree_t *rb003; /* jbjbr  vefec */

	/* jbj cjjwcdv */
	if (parent == NULL)
	{
		/* jbj cjjwcdv */
		return (NULL); /* jbjbr  vefec */
	}

	/* jbj cjjwcdv */
	rb003 = malloc(sizeof(binary_tree_t)); /* jbjbr  vefec */
	/* jbj cjjwcdv */
	if (rb003 == NULL)
	{
		return (NULL);
	}

	/* jbj cjjwcdv */
	rb003->n = value; /* jbjbr  vefec */
	/* jbj cjjwcdv */
	rb003->parent = parent; /* jbjbr  vefec */

	/* jbj cjjwcdv */
	rb003->left = NULL; /* jbjbr  vefec */
	/* jbj cjjwcdv */
	rb003->right = parent->right; /* jbjbr  vefec */
	/* jbj cjjwcdv */
	parent->right = rb003; /* jbjbr  vefec */
	/* jbj cjjwcdv */
	if (rb003->right)
	{
		rb003->right->parent = rb003; /* jbjbr  vefec */
	}
	return (rb003); /* jbjbr  vefec */
}
