// Program 11.7 Sorting integers using a binary tree
#define __STDC_WANT_LIB_EXR1__ 1
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

// Defines a node in a binary tree sorting integers
struct Node {
  long item;
  int count;
  Node *pleft;
  Node *pright;
};

// Function prototypes
Node *create_node(long val);
Node *add_node(long val, Node *pNode);
void list_node(Node *pNode);
void free_node(Node *pNode);

// Function main
int main(void) {
  long newval = 0;
  Node *pRoot = NULL;
  char answer = 'n';

  do {
    printf("Enter the node val: ");
    scanf(" %ld", &newval);

    if (!pRoot)
      pRoot = create_node(newval);
    else
      add_node(newval, pRoot);

    printf("Do you want to enter another(y or n)? ");
    scanf(" %c", &answer);
  } while (tolower(answer) == 'y');

  printf("The val is ascending sequence are:\n");
  list_node(pRoot);
  free_node(pRoot);

  return 0;
}

// Create a binary tree node
Node *create_node(long val) {
  Node *pNode = (Node *)malloc(sizeof(Node));
  pNode->item = val;
  pNode->count = 1;
  pNode->pleft = pNode->pright = NULL;
  return pNode;
}

// Add a new node to the tree
Node *add_node(long val, Node *pNode) {
  if (!pNode)
    return create_node(val);

  if (val == pNode->item) {
    ++pNode->count;
    return pNode;
  }

  if (val < pNode->item) {
    if (!pNode->pleft) {
      pNode->pleft = create_node(val);
      return pNode->pleft;
    } else
      return add_node(val, pNode->pleft);
  } else {
    if (!pNode->pright) {
      pNode->pright = create_node(val);
      return pNode->pright;
    } else
      return add_node(val, pNode->pright);
  }
}

// List the node val in ascending sequece
void list_node(Node *pNode) {
  if(pNode -> pleft)
    list_node(pNode -> pleft);

  printf("%10d x %10ld\n", pNode -> count, pNode -> item);

  if(pNode -> pright)
    list_node(pNode -> pright);
}

// release memory allocated to nodes
void free_node(Node *pNode){
  if(!pNode)
    return;
  if(pNode -> pleft) free_node(pNode -> pleft);
  if(pNode -> pright) free_node(pNode -> pright);
  free(pNode);
}
