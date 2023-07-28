#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s
 * singly linked list
 * @len: This is to tell you the lenght of the string
 * @str: This is a string
 * @next -  This points to the next node
 * Return - is always 0
 * project 0x12
*/

typedef struct list_s
{
	unsigned int len;
	char *str;
	struct list_s *next;
}
list_t;
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
#endif
