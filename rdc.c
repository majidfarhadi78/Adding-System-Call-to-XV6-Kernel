#include "types.h"
#include "stat.h"
#include "user.h"
int main()
{
	printf ( 1 , "Hi, the number of read syscall is %d so far!\n" , getreadcount() ) ;
	exit();
}
