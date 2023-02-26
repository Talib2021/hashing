#include <stdio.h>
#include <stdlib.h>
#define n 5
int h[n] = {NULL};
struct node
{
    int data;
    struct node *next;
};
struct node *head[n] = {NULL}, *c;

void insert()
{
    int i, key;
    printf("\nenter a value to insert into hash table\n");
    scanf("%d", &key);
    i = key % n;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = key;
    newnode->next = NULL;
    if (head[i] == NULL)
        head[i] = newnode;
    else
    {
        c = head[i];
        while (c->next != NULL)
        {
            c = c->next;
        }
        c->next = newnode;
    }
}
void search()
{
    int key, index;
    printf("\nEnter the element to search\n");
    scanf("%d", &key);
    index = key % n;
    if (head[index] == NULL)
        printf("\nSearch element not found\n");
    else
    {
        for (c = head[index]; c != NULL; c = c->next)
        {
            if (c->data == key)
            {
                printf("search element found\n");
                break;
            }
        }
        if (c == NULL)
            printf("\nsearch element not found\n");
    }
}
void display()
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nentries at index%d\n", i);
        if (head[i] == NULL)
        {
            printf("no hash entry");
        }
        else
        {
            for (c = head[i]; c != NULL; c = c->next)
                printf("%d->", c->data);
        }
    }
}

void main()
{
    int opt;
    while (1)
    {
        printf("\nPress 1. Insert\t2.Search\t3.Display\t4.Exit\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            insert();
            break;
        case 2:
            search();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}