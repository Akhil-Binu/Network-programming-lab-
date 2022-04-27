#include <stdio.h>
#include <unistd.h>

void main()
{
    int pId;
    pId = fork();
    if (pId < 0)
    {
        printf("Process creation is Unsuccessful!");
    }
    else if (pId == 0)
    {
        printf("Child process:");
        printf("\nChild : Child’s PID: %d", getpid());
        printf("\nChild : Parent’s PID: %d\n", getppid());
    }
    else if (pId > 0)
    {
        printf("Parent process:");
        printf("\nParent : Parent’s PID: %d", getpid());
        printf("\nParent : Child’s PID: %d\n", pId);
    }
}
