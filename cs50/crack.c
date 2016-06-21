#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<crypt.h>
#define _XOPEN_SOURCE
#include <unistd.h>

int main(int argc, char * argv[])
{
   //stirng newEncry = NULL;
    if(argc!=2)
    {
        printf("This is not  right  way to crack\n");
        return 1;
    }
  char salt[2];
  salt[0]=argv[1][0];
  salt[1]=argv[1][1];     
   FILE *fp = fopen("/usr/share/dict/words", "r");
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    if (fp == NULL)
        exit(EXIT_FAILURE);
    while ((read = getline(&line, &len, fp)) != -1) {
        
	char *newEncry=crypt(line,salt);
	if(strcmp(newEncry,argv[1])==0)
        {
        printf("%s\n",line);
        break;
        }
    }

    fclose(fp);

    return 0;
}

