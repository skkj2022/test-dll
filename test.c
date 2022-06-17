/*
  author : ez
  date : 2015/7/9
*/
 
#include <stdio.h>
#include "mydll.h"
 
int main (int argc, char* argv []) {
	
	int res = add_range (1, 10);
	printf ("%d\n", res);
	return 0;
}