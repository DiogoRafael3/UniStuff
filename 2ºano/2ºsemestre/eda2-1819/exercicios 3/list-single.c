#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 551

struct node{
	int value;
	struct node *next;
};

struct list{
	struct node *head;
};

struct node *new_node(int value){
	struct node *node=malloc(sizeof(struct node));
	node->value=value;
	node->next=NULL;
	return node;
}

struct list *list_new(){
	struct list *list=malloc(sizeof(struct list));
	list->head=NULL;
	return list;
}

void list_insert(struct list *list, int value){
	struct node *new=list->head;
	if(list->head==NULL) list->head=new_node(value);
	else{
		while(new->next!=NULL)
			new=new->next;
		new->next=new_node(value);
	}
}

void list_print(struct list *list){
	struct node *new=list->head;
	if(list->head==NULL);
	else if(new->next==NULL) printf("%d\n", new->value);
	else{
		while(new->next!=NULL){
			printf("%d ", new->value);
			new=new->next;
		}
		printf("%d\n", new->value);
	}
}

bool list_empty(struct list *list){
	if(list->head==NULL) return true;
	return false;
}

bool list_find(struct list *list, int value){
	struct node *new=list->head;
	if(list->head==NULL) return false;
	else{
		while(new->next!=NULL){
			if(new->value==value) return true;
			new=new->next;
		}
		if(new->value==value) return true;
	}
	return false;
}

void list_destroy(struct list *list){
	struct node *new=list->head;
	struct node *buffer=new;
	if(list->head==NULL);
	else if(new->next==NULL) free(new);
	else{
		while(new->next!=NULL){
			new=new->next;
			free(buffer);
			buffer=new;
		}
		free(new);
	}
}

void list_remove(struct list *list, int value){
	struct node *new=list->head;
	if(new==NULL);
	else{
		struct node *after=new->next;
		while(new->next!=NULL){
			if(new==value){
				free(new);
				list->head=after;
			}
			new=new->next;
			after=new->next;
		}
		if(new==value){
			free(new);
			list->head=after;
		}
	}
}

int main(void){
	struct list *list=list_new();
	list_insert(list,1);
	list_insert(list,2);
	list_insert(list,4);
	list_insert(list,3);
	list_print(list);
	printf("%d\n", list_find(list,3));
	//list_print(list);
}