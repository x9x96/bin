#ifndef BINARY_H
#define BINARY_H

#include <stdlib.h>


/**
 * struct binary_tree_s - bgbbf vdvdvfe dfvfv
 *
 * @n: bgbbf vdvdvfe dfvfv
 * @parent: bgbbf vdvdvfe dfvfv
 * @left: bgbbf vdvdvfe dfvfv
 * @right: bgbbf vdvdvfe dfvfv
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;


/**
 * struct queue_n_s - bgbbf vdvdvfe dfvfv
 *
 * @value: bgbbf vdvdvfe dfvfv
 * @next: bgbbf vdvdvfe dfvfv
 */
struct queue_n_s
{
	binary_tree_t *value;
	struct queue_n_s *next;
};
typedef struct queue_n_s queue_n;


/**
 * struct queue_s - bgbbf vdvdvfe dfvfv
 *
 * @head: bgbbf vdvdvfe dfvfv
 * @tail: bgbbf vdvdvfe dfvfv
 */
struct queue_s
{
	queue_n *head;
	queue_n *tail;
};
typedef struct queue_s queue_t;


int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
queue_t *insert_to_queue(queue_t **queue, const binary_tree_t *tree);
binary_tree_t *pop_from_queue(queue_t **queue);
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
avl_t *array_to_avl(int *array, size_t size);
size_t _binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_left_most_depth(const binary_tree_t *tree);
bst_t *bst_remove(bst_t *root, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *avl_insert(avl_t **tree, int value);
int _is_perfect(size_t req_depth, size_t depth, const binary_tree_t *tree);

#endif
