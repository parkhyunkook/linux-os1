#include <unistd.h>

main()
{
	printf("before executing ls -l\n");
	execl("/bin/ls","ls","-l",(char*)0);
	printf("after executeing ls -l\n");
}

