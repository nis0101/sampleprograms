#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

typedef struct node
{
	int x ;
	struct node * next;
}node;

void * create_list(int size)
{
	if(size == 0)
		return NULL;
	node * start_ptr= (node *)malloc(sizeof(node));
	node * ptr = start_ptr;
	for(int i= 0; i<size;i++)
	{
		node * tmp_ptr = (node *)malloc(sizeof(node));
		tmp_ptr->x=i;
		tmp_ptr->next=NULL;
		ptr->next = tmp_ptr;
		ptr=tmp_ptr;
	}
	return  (void *)start_ptr;
}
void print_list( node * start)
{
	node * n = start;
	while(n!=NULL)
	{
		cout<<n->x<<endl;
		n=n->next;
	}
}
void  remove_dups(node * start)
{
	node * tmp = start;
	node * tmp_next;
	while( (tmp != NULL))
	{
		tmp_next=tmp->next;
		node * intm = tmp;
		while( tmp_next != NULL)
		{
			if(tmp->x == tmp_next->x)
			{
				intm->next=tmp_next->next;
				node * free_ptr = tmp_next;
				tmp_next=tmp->next->next;
				free(free_ptr);
			}
			else
			{
			    intm=tmp_next;
			    tmp_next=tmp_next->next;
			}
		}
		tmp=tmp->next;
	}
}
void delete_access_node(node * acc)
{
	node * tmp = acc;
	node* prev;
	while(tmp!=NULL)
	{
		if(tmp->next != NULL)
		{
		   tmp->x =tmp->next->x;
		   prev=tmp;
		   tmp=tmp->next;
		}
		else
		{
			prev->next=NULL;
			free(tmp);
			break;
		}
	}
}
int main(void)
{
	node * n=(node *) create_list(10);
    print_list(n);
    cout<<"REmoving duplicates now: "<<endl;
    remove_dups(n);
    print_list(n);
    node * tmp =n;
    while(tmp != NULL)
    {
    	if(tmp->x == 5)
    	{
    		delete_access_node(tmp);
    		break;
    	}
    	tmp =tmp->next;
    }
    cout<<"List after removing access node 5: ";print_list(n);
	return 0;

}
