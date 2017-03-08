#include "data.h"
typedef struct node {
	data d;
	struct node *next;
}node;
typedef struct queue {   
	node *head, *tail;
}queue;

void qinit(queue *q);
void enqueue(queue *q, data d);
data dequeue(queue *q);
int qempty(queue *q);
int qfull(queue *q);
