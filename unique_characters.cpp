#include<iostream>
#include<stdlib.h>
#include<strings.h>
using namespace std;
//Reverse a string
void reverse_string( char * str,int size)
{
	int i = size-1;
	int x =0;
	for (x=0;x<i;x++,i--)
	{
		char temp = str[x];
		str[x]= str[i];
		str[i]=temp;

	}
}
void check_uniqueness(const char *x ,int size)
{
  for(int out=0;out<size-1;out++)
  {
  for(int in=out+1;in<size;in++)
  {
	 if(x[out]==x[in])
	 {
		 cout<<"Not unique: Exit";
		 exit(0);
	 }
  }
  }
  cout<<"If reached here then string is unique"<<endl;
  cout<<"Size is :"<<size<<endl;
}
void replace_dupchar(char * str,int size)
{
	unsigned int running_mul =1*str[0];
	for(int i = 1 ; i< size -1;i++)
	{
		unsigned int tmp = running_mul*str[i];
	}
}
void anagram_checker(const char * x,const int xsize,const char * y,const int ysize)
{
	unsigned int xsum =0;
	unsigned int ysum =0;
	if(ysize != xsize)
	{
		cout<<"Not anagram"<<endl;
	}
	else
	{
		for(int i=0;i<xsize;i++)
		{
			xsum+=x[i];
			ysum+=y[i];
		}
		if(xsum == ysum )
		{
			cout<<"Anagram"<<endl;

		}
		else
			cout<<"Not anagram"<<endl;
	}

}

int main()
{
  char x[]= "deadbeef";
  char a[]="cinem";
  char b[]="iceman";
  int asize =( sizeof(a)/sizeof(char));
  int bsize =( sizeof(b)/sizeof(char));
  anagram_checker(a,asize,b,bsize);
  int size =( sizeof(x)/sizeof(char))-1;
  //check_uniqueness(x,size);
  reverse_string(x,size);
  cout<<"REversed string :"<<x<<endl;
}
