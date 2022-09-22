#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal of binary tree
 * @tree: tree to be traversed
 * @func: Pointer to function call
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
