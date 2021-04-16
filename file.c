#include<stdio.h>
int main()
{
char ch_arr[3][10] = {
                         "spike",
                         "tom",
                         "jerry"
                     };
                     printf("%s/n",(ch_arr+0));
                     printf("%p",&ch_arr[0]);





  return 0;
}
