#include <stdio.h>
#include <time.h>

#include "hash_table.h"

int main()
{
  
  clock_t start = clock();

  ht_hash_table* ht = ht_new();
  ht_insert(ht, "first", "yipee");
  ht_insert(ht, "first", "second");
  ht_insert(ht, "league", "yipee");

  char* searched_val = ht_search(ht, "first");

  ht_del_hash_table(ht);

  clock_t end = clock();

  printf("searched key: first\nfound value: %s\n", searched_val);

  double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("time taken: %f seconds\n", cpu_time_used);

  return 0;

}
