#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
void qinit(queue *q){
	q->head = q->tail = NULL;
}
void enqueue(queue *q, data d){
	node *tmp;
	tmp = (node *) malloc(sizeof(node));
	tmp->d = d;
	tmp->next = NULL;
	if(q->tail) 
		q->tail->next = tmp;
	else
		q->head = tmp;
	q->tail = tmp;
}
data dequeue(queue *q){
	data d;
	node *tmp;
	d = q->head->d;
	tmp = q->head->next;
	free(q->head);
	q->head = tmp;
	if(q->head == NULL)
		q->tail = NULL;
	return d;
}
int qempty(queue *q){
	return q->head == NULL;
}
int qfull(queue *q){
	return 0;
}
