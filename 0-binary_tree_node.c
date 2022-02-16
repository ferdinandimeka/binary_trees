#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_node - it is a function that creates a binary tree node
 *
 * @parent: it is a pointer to the parent node of the node to create
 * @value: it is the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = (binary_tree_t*) malloc(sizeof(binary_tree_t));

	if(!tempNode)
	{
	return (NULL);
	}
	
	tempNode->n = value;
	tempNode->parent = parent;
	tempNode->left = NULL;
	tempNode->right = NULL;

	return (tempNode);
}
