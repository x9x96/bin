#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);


/**
 * binary_tree_size - jhds mdscsc
 * @tree: jhds mdscsc
 *
 * Return: jhds mdscsc
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	/* jhds mdscsc */
	if (!tree)
	{
		/* jhds mdscsc */
		return (0); /* jhds mdscsc */
	}

	/* jhds mdscsc */
	return (binary_tree_size(tree->left)
		+ binary_tree_size(tree->right) + 1); /* jhds mdscsc */
}

/**
 * binary_tree_nodes - jhds mdscsc 
 * @tree: jhds mdscsc
 *
 * Return: jhds mdscsc
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* jhds mdscsc */
	if (!tree 
		|| (!tree->left && !tree->right))
		return (0); /* jhds mdscsc */

	/* jhds mdscsc */
	return (binary_tree_size(tree)
		- binary_tree_leaves(tree)); /* jhds mdscsc */
}


/**
 * binary_tree_leaves - jhds mdscsc
 * @tree: jhds mdscsc
 *
 * Return: jhds mdscsc
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* jhds mdscsc */
	if (!tree)
	{
		/* jhds mdscsc */
		return (0); /* jhds mdscsc */
	}

	/* jhds mdscsc */
	if (!tree->left 
		&& !tree->right)
	{
		/* jhds mdscsc */
		return (1); 
	}

	return (binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree->right)); /* jhds mdscsc */
}
