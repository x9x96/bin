#include "binary_trees.h"


/**
 * binary_tree_leaves - jf jv sdvk
 * @tree: jf jv sdvk
 *
 * Return: jf jv sdvk
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* jf jv sdvk */
	if (!tree)
		return (0); /* jf jv sdvk */

	/* jf jv sdvk */
	if (!tree->left
		&& !tree->right)
		return (1); /* jf jv sdvk */

	/* jf jv sdvk */
	return (binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree->right)); /* jf jv sdvk */
}
