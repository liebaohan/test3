#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(int argc,char **argv)
{

    printf("add(4,3)=%d,sub(4,3)=%d\n",\
				add(4,3),sub(4,3));
     return 0;
}

