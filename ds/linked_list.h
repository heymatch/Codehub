#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Linked_List_Single{
    char data;
    struct Linked_List_Single *next;
};

int insert(struct Linked_List_Single *head, int index, char data);
int search(struct Linked_List_Single *head, char data);
int remove(struct Linked_List_Single *head, int index);
int update(struct Linked_List_Single *head, int index, char data);

bool empty(struct Linked_List_Single *head);

#endif