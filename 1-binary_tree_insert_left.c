#include "binary_trees.h"


/**
 * binary_tree_insert_left - wjnjdjdc cj djcd c 
 * @parent: wjnjdjdc cj djcd c
 * @value:  wjnjdjdc cj djcd c
 *
 * Return: wjnjdjdc cj djcd c
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* wjnjdjdc cj djcd c */
	binary_tree_t *rb003; /* jbjbr  vefec */

	/* wjnjdjdc cj djcd c */
	if (parent == NULL)
	{
		/* wjnjdjdc cj djcd c */
		return (NULL); /* jbjbr  vefec */
	}

	/* wjnjdjdc cj djcd c */
	rb003 = malloc(sizeof(binary_tree_t)); /* jbjbr  vefec */

	/* wjnjdjdc cj djcd c */
	if (rb003 == NULL)
	{
		return (NULL); /* jbjbr  vefec */
	}

	/* wjnjdjdc cj djcd c */
	rb003->n = value; /* jbjbr  vefec */
	/* wjnjdjdc cj djcd c */
	rb003->parent = parent; /* jbjbr  vefec */

	/* wjnjdjdc cj djcd c */
	rb003->right = NULL; /* jbjbr  vefec */
	/* wjnjdjdc cj djcd c */
	rb003->left = parent->left; /* jbjbr  vefec */
	/* wjnjdjdc cj djcd c */
	parent->left = rb003; /* jbjbr  vefec */
	/* wjnjdjdc cj djcd c */
	if (rb003->left)
	{
		/* wjnjdjdc cj djcd c */
		rb003->left->parent = rb003; /* jbjbr  vefec */
	}
	return (rb003); /* jbjbr  vefec */
}
