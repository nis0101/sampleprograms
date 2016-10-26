#include<iostream>
#include<strings.h>
#include <utility>
using namespace std;

int main()
{
	pair< string , pair<int,int> > P;
	P.first = "XYZ";
	P.second.first ='X';
	P.second.second ='Y';
	cout<<P.first<<":"<<P.second.first<<":"<<P.second.second<<endl;
}
