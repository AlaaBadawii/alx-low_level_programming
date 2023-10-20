#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif /* MY_HEADER_H */
