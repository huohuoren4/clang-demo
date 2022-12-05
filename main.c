#include <stdio.h>
#include "./header/mytime.h"

int main(int argc, char const *argv[])
{
   printf("当前时间: %s\n", formatNowTime());
   for (size_t i = 0; i < 10; i++)
   {
      printf("hello\n");
   }
   
   return 0;
}
