#### Return_Type + Parameter
```
#include <stdio.h>

int sum(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int a = sum(10, 20);

    printf("%d", a);

    // printf("%d",sum(10,20));

    return 0;
}

```

```
#include <stdio.h>

int sum(int x, int y);
int main()
{
    int a = sum(30, 20);

    printf("%d", a);

    // printf("%d",sum(10,20));

    return 0;
}

int sum(int x, int y)
{
    int z = x + y;
    return z;
}
```


