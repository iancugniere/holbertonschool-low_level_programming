#include "binary_trees.h"
/**
 * binary_tree_preorder - Checks whether a node is a root
 *
 * @tree: SE
 * @func: Pointer to function
 * Return: New node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	func(tree->n);
	binary_tree_preorder(tree->left, &(*func));
	binary_tree_preorder(tree->right, &(*func));
}