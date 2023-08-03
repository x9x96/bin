#include "binary_trees.h"


/**
 * binary_tree_node - wjnjdjdc cj djcd c
 *
 * @parent: - wjnjdjdc cj djcd c
 * @value: - wjnjdjdc cj djcd c
 * Return: wjnjdjdc cj djcd c
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* wjnjdjdc cj djcd c */
	binary_tree_t *rb002; /* jbjbr  vefec */

	/* wjnjdjdc cj djcd c */
	rb002 = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	/* wjnjdjdc cj djcd c */
	if (!rb002)
	{
		/* wjnjdjdc cj djcd c */
		return (NULL);
	}

	rb002->parent = parent; /* jbjbr  vefec */
	/* wjnjdjdc cj djcd c */

	rb002->n = value; /* jbjbr  vefec */

	/* wjnjdjdc cj djcd c */
	rb002->left = NULL; /* jbjbr  vefec */

	/* wjnjdjdc cj djcd c */
	rb002->right = NULL; /* jbjbr  vefec */

	/* wjnjdjdc cj djcd c */
	return (rb002);
}

