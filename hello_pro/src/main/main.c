#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(int argc,char **argv)
{

	
    puts("start hello!!!");
    printf("add(4,3)=%3d,sub(4,3)=%6d\n",\
				add(4,3),sub(4,3));
    puts("end hello!!!");
     return 0;
}

