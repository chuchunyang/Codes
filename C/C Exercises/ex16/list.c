#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

// put char into a newly created node
Node * create_node(char ch) {
  Node * node = (Node *) malloc(sizeof(Node));
  assert(node); //confirm malloc didn't fail

  node->data = ch;
  node->next = NULL;
  return node;
}

// output the list iteratively
void print(const Node * cur) {
  while (cur != NULL) {
    printf("%c ", cur->data);
    cur = cur->next;  // advance to next node
  }
}

int length(Node *head){
    Node *cur = head;
    int count = 0;
    while(cur != NULL) {
    	cur = cur->next;
    	count++;
    }
    return count;
}

void add_after(Node * n, char c)
{
    Node * newNode = create_node(c);
    newNode->next = n->next;
    n->next = newNode;
}

void reverse_print(Node *n)
{
    Node *cur = n;
    

}


