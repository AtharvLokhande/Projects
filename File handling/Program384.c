#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int OpenFile(char Name[])
{
    int fd = 0;
    fd = open (Name,O_RDWR);
    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that ypu want to open\n :");
    scanf("%s",Fname);

    fd = OpenFile(Fname);

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("File is sucessfully Open eith FD %d\n",fd);
    }

    return 0;
}