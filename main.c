#include "ft_printf.h"

int main(void)
{
    int z, x;

    z = 0; 
    x = 0;

/*
    i = ft_printf("%% %c %% %s %% %d %% %i %% %u %% %x %% %X %% %% %% %c %% %s %% %d %% %i %% %u %% %x %% %X %% %% %% %c %% %s %% %d %% %i %% %u %% %x %% %X %% %% %c %% \n",
     'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);

    j = printf("%% %c %% %s %% %d %% %i %% %u %% %x %% %X %% %% %% %c %% %s %% %d %% %i %% %u %% %x %% %X %% %% %% %c %% %s %% %d %% %i %% %u %% %x %% %X %% %% %c %% \n",
     'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
*/
    //i = ft_printf(" %09d %010d %011d %012d %013d %014d %015d\n", __INT_MAX__, (-__INT_MAX__  -1), __LONG_MAX__, (-__LONG_MAX__ -1L), (__LONG_MAX__ *2UL+1UL), 0, -42);
    z = ft_printf("%5%\n");
    //z = ft_printf("%7.5s\n", "bombastic");
    //printf("\n");
    x = printf("%5%\n");
    //j = printf(" %0+30d ", 15);
    //j = printf(" %09d %010d %011d %012d %013d %014d %015d\n", __INT_MAX__, (-__INT_MAX__  -1), __LONG_MAX__, (-__LONG_MAX__ -1L), (__LONG_MAX__ *2UL+1UL), 0, -42);

    printf("ftp: %d p:%d", z, x);
}