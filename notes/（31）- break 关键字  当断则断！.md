# （31）- break 关键字 | 当断则断！

[toc]

## 一、break 关键字简介

- `break`是一个关键字，`break;`是一个语句，区别就在于后者加了个分号。
- `break;`语句往往用来跳出循环，主要用在三个地方：
-   1）`while`/`do while`语句中；
-   2）`for`语句中；
-   3）`switch case`语句中；

## 二、while 中的 break

- 计算 `1 + 2 + ... + 100`的和，我们可以利用如下代码实现：

```c
#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 1;

	while (i <= 100) {
		sum += i;
		i++;
	}

	printf("%d\n", sum);

	return 0;
}
```

- 运行结果为：`5050`。
- 当然，我们也可以把循环条件定义成 “永真”， 然后在循环内部，执行 `break;`语句来跳出循环，实现如下：

```c
#include <stdio.h>

int main() {
    int s = 0, i = 1;
    while(1) {
        s += i;
        ++i;
        if(i > 100) break;
    }
    printf("%d\n", s);
    return 0;
} 
```

## 二、for 中的 break

- for 语句也一样，我们想找到一个最小的正整数，这个数既是 **211** 的倍数，也是 **985** 的倍数，在我们不知道这个数的范围到底有多大的时候，可以把循环条件置空，然后在循环体内部去写我们的跳出逻辑，实现如下：

```c
#include <stdio.h>
int main() {
    int i = 1;
    for(i = 1; ; ++i) {
        if(i % 211 == 0 && i % 985 == 0) {
            break;
        }
    }
    printf("%d\n", i);
    return 0;
} 
```

- `i % 211 == 0`表示 i 是 **211** 的倍数，`i % 985 == 0`表示 i 是 **985** 的倍数，用`&&`连接，代表两者都成立的情况，此时跳出循环。
- 运行结果为：`207835`。

## 三、switch case 中的 break

- 在`siwtch case`语句中，当满足某个条件以后，我们往往需要跳出本次`switch`，这时候就需要用到 `break`，如下代码实现的是给定阿拉伯数字，输出他的英文形式，实现如下：

```c
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    switch(a){
        case 1:  printf("One\n");   break;
        case 2:  printf("Two\n");   break;
        case 3:  printf("Three\n"); break;
        case 4:  printf("Four\n");  break;
        case 5:  printf("Five\n");  break;
        case 6:  printf("Six\n");   break;
        default: printf("Other\n"); break;
    }
    return 0;
}
```

 