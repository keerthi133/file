#include<studio.h>
void main()
{
file *fp1,*fp2;
int ch;
fp1=fopen("d:/input.txt","r");
fp2=fopen("d:/input.txt","w");
while((ch=fgetc(fp2))
{
fputc(ch,fp2);
}
printf("copied");
}
