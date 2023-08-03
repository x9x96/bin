#include "binary_trees.h"


/**
 * binary_tree_is_root - bhchj c dcc
 * @node: bhchj c dcc
 *
 * Return: bhchj c dcc
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	/* bhchj c dcc */
	return ((!node || 
		node->parent) ? 0 : 1); /* bhchj c */
}
