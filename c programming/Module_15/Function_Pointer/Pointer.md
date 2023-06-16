#### Pointer in C
```
#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr;
    ptr = &x;
    printf("x er address-%p\n", &x);
    printf("ptr er value-%p\n", ptr);
    printf("ptr er address-%p\n", &ptr);
    printf("ptr er Memory-%d\n", sizeof(ptr));

    return 0;
}

```