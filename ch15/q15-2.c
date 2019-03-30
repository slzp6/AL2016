/* code: q15-2.c   (v1.16.00) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TREE_SIZE 2048

struct node
{
  char data;
  int freq;
  struct node *left;
  struct node *right;
};
typedef struct node NODE_TYPE;

struct heap
{
  NODE_TYPE **array;
  int size;
  int max_size;
};
typedef struct heap HEAP_TYPE;

/* -------------------------------------- */
NODE_TYPE *heap_new_node (char data, int freq)
{
  NODE_TYPE *new_node;

  new_node = malloc (sizeof (NODE_TYPE));
  if (NULL == new_node) {
    printf ("ERROR(heap_new_node): Can not allocate memory.\n");
    exit (-1);
  }
  new_node->data = data;
  new_node->freq = freq;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

/* -------------------------------------- */
HEAP_TYPE *heap_create (int max_size)
{
  HEAP_TYPE *Heap;
  Heap = malloc (sizeof (HEAP_TYPE));
  if (NULL == Heap) {
    printf ("ERROR(heap_create): Can not allocate memory.\n");
    exit (-1);
  }
  Heap->size = 0;
  Heap->max_size = max_size;
  Heap->array = (NODE_TYPE **) malloc (Heap->max_size * sizeof (NODE_TYPE *));
  return Heap;
}

/* -------------------------------------- */
void heap_swap_two_nodes (NODE_TYPE ** src, NODE_TYPE ** tgt)
{
  NODE_TYPE *temp;
  temp = *src;
  *src = *tgt;
  *tgt = temp;
}

/* -------------------------------------- */
void heap_heapify_nodes (HEAP_TYPE * Heap, int pos)
{
  int left, right, pos_min;
  pos_min = pos;
  left = 2 * pos + 1;
  right = 2 * pos + 2;

  if (left < Heap->size &&
      Heap->array[left]->freq < Heap->array[pos_min]->freq) {
    pos_min = left;
  }

  if ((right < Heap->size) &&
      (Heap->array[right]->freq < Heap->array[pos_min]->freq)) {
    pos_min = right;
  }

  if (pos_min != pos) {
    heap_swap_two_nodes (&Heap->array[pos_min], &Heap->array[pos]);
    heap_heapify_nodes (Heap, pos_min);
  }
}

/* -------------------------------------- */
int heap_check_size (HEAP_TYPE * Heap)
{
  if (Heap->size == 1) {
    return 1;
  }
  else {
    return 0;
  }
}


/* -------------------------------------- */
NODE_TYPE *heap_find_min_node (HEAP_TYPE * Heap)
{
  NODE_TYPE *temp;
  temp = Heap->array[0];
  Heap->array[0] = Heap->array[Heap->size - 1];

  Heap->size = Heap->size - 1;
  heap_heapify_nodes (Heap, 0);

  return temp;
}


/* -------------------------------------- */
void heap_insert_node (HEAP_TYPE * Heap, NODE_TYPE * HeapNode)
{
  int i;
  Heap->size = Heap->size + 1;
  i = Heap->size - 1;
  while (i && (HeapNode->freq < Heap->array[(i - 1) / 2]->freq)) {
    Heap->array[i] = Heap->array[(i - 1) / 2];
    i = (i - 1) / 2;
  }
  Heap->array[i] = HeapNode;
}


/* -------------------------------------- */
void heap_tree (HEAP_TYPE * Heap)
{
  int i, n;

  n = Heap->size - 1;
  for (i = (n - 1) / 2; i >= 0; --i) {
    heap_heapify_nodes (Heap, i);
  }
}



/* -------------------------------------- */
int heap_check_leaf_node (NODE_TYPE * tree)
{
  return !(tree->left) && !(tree->right);
}

/* -------------------------------------- */
HEAP_TYPE *heap_tree_build (char data[], int freq[], int size)
{
  int i;
  HEAP_TYPE *Heap;

  Heap = heap_create (size);
  for (i = 0; i < size; ++i) {
    Heap->array[i] = heap_new_node (data[i], freq[i]);
  }
  Heap->size = size;
  heap_tree (Heap);

  return Heap;
}

/* -------------------------------------- */
NODE_TYPE *Huffman_tree (char data[], int freq[], int size)
{
  NODE_TYPE *left, *right, *node;
  HEAP_TYPE *Heap;
  int freq_sum;

  Heap = heap_tree_build (data, freq, size);
  while (!heap_check_size (Heap)) {
    left = heap_find_min_node (Heap);
    right = heap_find_min_node (Heap);

    freq_sum = left->freq + right->freq;
    node = heap_new_node ('-', freq_sum);
    node->left = left;
    node->right = right;
    heap_insert_node (Heap, node);
  }

  return heap_find_min_node (Heap);
}

/* -------------------------------------- */
void Huffman_code_print (NODE_TYPE * tree, int code[], int n)
{
  int i;
  if (tree->left) {
    code[n] = 0;
    Huffman_code_print (tree->left, code, n + 1);
  }

  if (tree->right) {
    code[n] = 1;
    Huffman_code_print (tree->right, code, n + 1);
  }

  if (heap_check_leaf_node (tree)) {
    printf ("%2c (%d): ", tree->data, tree->freq);
    for (i = 0; i < n; ++i) {
      printf ("%d", code[i]);
    }
    printf ("\n");
  }
}


/* -------------------------------------- */
int main ()
{
  NODE_TYPE *tree;
  int buffer[TREE_SIZE];
  int array_size;

  char array[] = { 'a', 'b', 'd', 'e', 'c' };
  int freq[] = { 4, 3, 2, 2, 1 };

  array_size = sizeof (array) / sizeof (array[0]);
  tree = Huffman_tree (array, freq, array_size);
  Huffman_code_print (tree, buffer, 0);

  return 0;
}
