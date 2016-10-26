#include<iostream>
#include<stdlib.h>
using namespace std;

inline int cmp ( const void * a, const void * b)
{
	int ax = *(int *)a;
	int ay = *(int *)b;
	if(ax <ay)
	{
	    return -1;
	}
	else if( ax > ay)
	{
		return 1;
	}
	else
		return 0;
}
static const int size = 10;
int main()
{
	int array[size];
	for(int i =0;i<size;i++)
	{
		cin>>array[i];
	}
	qsort(array,size,sizeof(int),cmp);
	for(int i =0;i<size;i++)
	{
		cout<<array[i]<<"\t";
	}

}

