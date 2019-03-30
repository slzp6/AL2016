/* code: q15-1.c   (v1.16.00) */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct code_table
{
  int length;
  int num;
  int first;
};
typedef struct code_table CODE_TABLE_TYPE;

/* -------------------------------------- */
void compute_first (CODE_TABLE_TYPE table[], int array_size)
{
  int i, index;
  index = array_size - 1;
  table[index].first = 0;
  for (i = index - 1; i >= 0; i--) {
    table[i].first = ceil (((table[i + 1].first + table[i + 1].num) / 2.0));
  }
}

/* -------------------------------------- */
void table_print (CODE_TABLE_TYPE table[], int iSize)
{
  int i;
  printf ("L N F\n");
  for (i = 0; i < iSize; i++) {
    printf ("%d %d %d", table[i].length, table[i].num, table[i].first);
    printf ("\n");
  }
}

/* -------------------------------------- */
int table_read (CODE_TABLE_TYPE table[], char *filename)
{
  FILE *infile;
  int i;
  int iLength, iNum;

  if (NULL == (infile = fopen (filename, "rt"))) {
    printf ("\nERROR: Can not open file [%s]", filename);
    exit (-1);
  }

  i = 0;
  while (EOF != fscanf (infile, "%d%d", &iLength, &iNum)) {
    table[i].length = iLength;
    table[i].num = iNum;
    table[i].first = 0;
    i++;
  }

  fclose (infile);
  return i;
}


/* -------------------------------------- */
int main ()
{
  CODE_TABLE_TYPE table[128];
  int i;

  i = table_read (table, "table.txt");
  table_print (table, i);
  compute_first (table, i);
  table_print (table, i);

  return 0;
}
