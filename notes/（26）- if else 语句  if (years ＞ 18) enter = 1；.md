# （26）- if else 语句 | if (years ＞ 18) enter = 1；

[toc]

## 一、语句

### 1、简单语句

- 例如：`a = 6`是一个赋值表达式，而`a = 6;`则代表一个赋值语句。
- 如下代码所示：

```c
#include <stdio.h>
int main() {
    int a = 1;                // (1)
    int b = ++a;              // (2)
    int c = a + b;            // (3)
    printf("%d\n", a, b, c);  // (4)
    return 0;                 // (5)
}
```

- 以上就是五条简单语句。

### 2、复合语句

- 将一些简单语句用一对`{`和`}`括起来，就构成了一个复合语句。复合语句的作用和单个简单语句分开写是一致的，有时候也叫程序块。并且，花括号的后面不需要跟分号。
- 如下代码所示：

```c
#include <stdio.h>
int main() {
    {
        int a = 1;                // (1)
        int b = ++a;              // (2)
        int c = a + b;            // (3)
        printf("%d\n", a, b, c);  // (4)
    }
    return 0;                     // (5)
}
```

- 这段代码和上面那段代码的执行结果是一致的。
- 并且是按照顺序一条一条执行下来的。但是有些时候，我们期望达到的结果，并不是顺序结构就能满足的，我们需要引入一些更加多样化的结构，比如 分支结构（或者可以叫 选择结构）。
- 这一章，我们就来学习一下 C语言 中实现分支结构的判断语句 if - else。

## 二、if - else 语句

### 1、if - else 常规语法

- if - else 语句用于条件判定，它的语法如下：

```c
    if (表达式)
        语句1
    else
        语句2
```

> 这个语句在执行时，先计算 **表达式** 的值：
>
>   1）如果 **表达式** 的值 **非零**，则执行 **语句1**；
>
>     2）如果 **表达式** 的值 **为零**，则执行 **语句2**；

- 例如，下面的代码：

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 1)
        printf("%d 是奇数！", n);
    else 
        printf("%d 是偶数！", n);
    return 0;
} 
```

- `n % 2 == 1`是由算术运算符`%`和关系运算符`==`组成的表达式，它的含义是 n 模 2 的值是否为 1。如果为 1 即表达式成立，则输出 n 是奇数，否则输出 n 是偶数。
- 这就是最简单的 if - else 语句了。

### 2、加上花括号

- 这时候，如果我们想要在判断奇偶性之后，做一些更加复杂的事情，比如：当 n 为奇数的时候，将 n 乘上 3，再减去 4；当 n 为偶数的时候，将 n 减去 5，再乘上 6；我们就可以用到上文中所说的复合语句了。代码实现如下：

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 1) 
    {
        n *= 3;
        n -= 4;
    }
    else 
    {
        n -= 5;
        n *= 6;
    }
    return 0;
} 
```

- 这一下就多出了好多行，对于屏幕不够大的小伙伴，这样的写法就很别扭。所以，我们可以将左花括号`{`放在条件判断的后面，并且将 `else`放在右花括号`}`的后面。因为 C语言 对空格和换行不是很敏感，得到代码如下：

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 1) {
        n *= 3;
        n -= 4;
    } else {
        n -= 5;
        n *= 6;
    }
    return 0;
} 
```

### 3、表达式的省略语法

- 对表达式，我们可以对写法进行简化，例如下面两种写法是等价的：

```c
    if (表达式)
        语句1
    else
        语句2
```

 

```c
    if (表达式 != 0)
        语句1
    else
        语句2
```

- 所以，上面的代码，可以改成：

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 2) {            // (1)
        n *= 3;
        n -= 4;
    } else {
        n -= 5;
        n *= 6;
    }
    return 0;
} 
```

- (1) 这是唯一的一行区别，因为`n % 2 == 1`等价于`n % 2 != 0`，等价于`n % 2`。

### 4、else 可选

- 所以也可以表示成：

```c
if (表达式)
    语句
```

- 例如，当 n 为奇数的时候需要打印出 n 的值，为偶数时什么都不用干，就可以这么写：

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 2) {
        printf("%d\n", n);
    }
    return 0;
} 
```

## 三、else - if 语句

### 1、else - if 常规语法

- 在 C语言中，我们经常会遇到多路判断结构，语法如下：

```c
    if (表达式1)
        语句1
    else if(表达式2)
        语句2
    else if(表达式3)
        语句3
    else if(...)
        ...
    else
        语句n
```

- 这种语句是编写多路判断的常用方法，其中每个表达式会按照顺序进行依次求值，一旦某个表达式的结果为真，就会进入它对应的语句进行执行，并且对于后面所有的`else if`后的表达式 和 语句 都不会进行计算了。
- 而最后一个`else`表示的则是 “上述条件均不成立” 的情况，当然，如果不需要处理这种情况，也是可以省略的。

> 【例题1】通过输入字符，判断它的类型：
>
>   1）如果是数字，输出串 “number”；
>
>   2）如果是大写字母，输出串 “upper letter”；
>
>   3）如果是小写字母，输出串 “lowwer letter”；

- 1

```c
#include <stdio.h>
int main(){
    char c;
    c = getchar();
    if(c >= '0' && c <= '9')
        printf("number\n");
    else if(c >= 'A' && c <= 'Z')
        printf("upper letter\n");
    else if(c >= 'a' && c <= 'z')
        printf("lowwer letter\n");
    else
        printf("other\n");
    return 0;
}
```

- 2

```c
#include <stdio.h>
int main()
{
	char c;
	c = getchar();

	if (isdigit(c) != 0) {
		printf("number\n");
	}
	else if (isupper(c) != 0) {
		printf("upper letter\n");
	}
	else if (islower(c) != 0) {
		printf("lower lotter\n");
	}

	return 0;
}
```

- 需要用到一些 ASCII 相关的知识，如果存疑，可以参见这篇文章：[光天化日学C语言（07）- ASCII码 ](D:\GitRep\CP\notes\（07）- ASCII码  来，跟我念：阿斯克二马.md)。

## 三、嵌套 if 语句

### 1、嵌套 if 语句常规语法

- 这个概念比较简单，就是把之前的 if - else 语句的 语句1 替换成一个新的 if 语句，就形成了嵌套，如下：

```c
    if (表达式1) {
        if(表达式2)
            语句1
    } else
        语句n
```

###  2、else 的匹配问题

- 对于一个语句里面有多个`if`，但是只有一个`else`时，这个`else`到底是和哪个`if`匹配的，我们通过一个例子来说明。代码如下：

```c
#include <stdio.h>
int main() {
    int a = 1, b = 2;
    if(a)                   // (1)   
        if(a > b)           // (2)
           printf("a > b\n");
    else                    // (3)
        printf("a == 0\n");
    return 0;
}
```

- 想想看，这段代码输出的是什么？
- 是的，运行结果应该为：

```c
a == 0
```

- 为什么不是什么都不输出呢？

- 主要原因还是因为我们被缩进给骗了。C语言中的缩进是不能改变语义的，所以这段代码实际应该是这样的：

```c
#include <stdio.h>
int main() {
    int a = 1, b = 2;
    if(a)                   // (1)   
        if(a > b)           // (2)
            printf("a > b\n");
        else                // (3)
            printf("a == 0\n");
    return 0;
}
```

- 也就是(3)的`else`，是匹配的(2)的`if`，不是匹配(1)的`if`；
- 结论：`else`与最近的前一个没有与`else`匹配的`if`匹配。所以怕产生歧义的最好办法，就是多加`{}`。
