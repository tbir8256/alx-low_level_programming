#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: hash table on success, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
if (!size)
return (NULL);
ht = calloc(1, sizeof(hash_table_t));
if (!ht)
return (NULL);
ht->size = size;
ht->array = calloc(size, sizeof(hash_node_t *));
if (!ht->array)
{
free(ht);
return (NULL);
}
return (ht);
}
