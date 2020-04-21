#include <unistd.h>
#include <sys/type.h>

main()
{
	pid_t pid;
	int i=0;
  
	i++;

	printf("before calling fork(%d)\n",i);
	pid=fork()
	if(pid==0)
		printf("Child process9(%d)\n",++i);
	else if(pid>0)

		printf("parent process(%d)\n", --i);
	else
		printf("fail to fork\n");


