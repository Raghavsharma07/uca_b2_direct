#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    int n,ct,index=0;
    char line[1000];
    char fname[20];
    scanf("%s",fname);
    fp=fopen(fname, "r");
    //fprintf(fp, "Testing...\n");
    //c = fgetc(fp);
    while ((c=fgetc(fp)) != EOF)
    {
        if(c!='\n')
        {
            line[index]=c;
            index++;
        }
        else{
            line[index]='\0';
            if(index>=80)
            {
                printf("%s\n",line);
            }
            index=0;
        }
       
        //c = fgetc(fp);
    }
    return 0;
}