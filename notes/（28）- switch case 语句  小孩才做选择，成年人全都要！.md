# （28）- switch case 语句 | 小孩才做选择，成年人全都要！

[toc]

## 一、分支语句

- 在学习 [☀️光天化日学C语言☀️（26）- if else 语句](D:\GitRep\CP\notes\（26）- if else 语句  if (years ＞ 18) enter = 1；.md) 时，我们已经知道了对于不同的条件调用不同的语句进行处理。来看个例题。

> 【例题1】根据输入的整型`a`，如果范围在 [1,6]，则输出它的英文形式（`One`、`Two`、…），否则输出 `Other`。

- 可以利用 if else 语句轻松写出来，代码实现如下：

```c
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a == 1) {
        printf("One\n"); 
    }else if(a == 2) {
        printf("Two\n"); 
    }else if(a == 3) {
        printf("Three\n"); 
    }else if(a == 4) {
        printf("Four\n"); 
    }else if(a == 5) {
        printf("Five\n"); 
    }else if(a == 6) {
        printf("Six\n"); 
    }else {
        printf("Other\n"); 
    }
    return 0;
}
```

## 二、switch case 语句

- 对于这种情况，我们可以利用 switch 语句来替代，实现如下：

```c
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    switch(a){
        case 1: 
            printf("One\n"); 
            break;
        case 2: 
            printf("Two\n"); 
            break;
        case 3: 
            printf("Three\n"); 
            break;
        case 4: 
            printf("Four\n"); 
            break;
        case 5: 
            printf("Five\n"); 
            break;
        case 6: 
            printf("Six\n"); 
            break;
        default:
            printf("Other\n");
            break;
    }
    return 0;
}
```

- 修改后的代码实现如下：

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

- 当然，这就是 **代码规范** 范畴的问题了，看团队里面怎么执行了，我这里就不多加讨论了。如果是个人代码，不打算给别人看，那当然怎么舒服怎么来。
- 上面的代码，在进行相应的输入后，运行结果如下：

```c
4↙
Four
```

### 2、switch case 用法

- switch 是另外一种选择结构的语句，用来代替简单的、拥有多个分枝的 if else 语句，基本格式如下：

```c
switch(表达式){
    case 整数1: 语句1;
    case 整数2: 语句2;
          ...
    case 整数n: 语句n;
    default: 语句n + 1;
}
```

> 对于 switch case 语句的执行过程，如下：
>
>   1）首先，计算 **表达式** 的值，假设为 x；
>
>   2）然后，从第一个 **case** 开始，比较 x 和 **整数1** 的值，如果相等，就执行冒号后面的所有语句，也就是从 **语句1** 一直执行到 **语句n + 1**，而不管后面的 **case** 是否匹配成功（这是平时开发的易错点，需要特别注意）。
>
>   3）如果 x 和 **整数1** 不相等，就跳过冒号后面的 **语句1**，继续比较第二个 case、第三个 case……，一旦发现和某个 **整数** 相等了，就会执行后面所有的语句。假设 x 和 **整数6** 相等，那么就会从 **语句6** 一直执行到 **语句n + 1**。
>
>   4）如果直到最后一个 **整数n** 都没有找到相等的值，那么就执行 **default** 后的 **语句n + 1**。

### 3、switch case 易错点

- 当和某个 **整数** 匹配成功后，会执行该分支以及后面所有分支的语句。例如，如果写成下面的代码，那么，结果可能不是我们想要的：

```c
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    switch(a){
        case 1: printf("One\n");
        case 2: printf("Two\n");
        case 3: printf("Three\n");
        case 4: printf("Four\n");
        case 5: printf("Five\n");
        case 6: printf("Six\n");
        default:printf("Other\n");
    }
    return 0;
}
```

- 运行结果如下：

```c
3↙
Three
Four
Five
Six
Other
```

- 输入3以后，程序发现和第 3 个分支匹配成功，于是就执行第 3 个分支以及后面的所有分支语句。这显然不是我们想要的结果，我们希望只执行第 3 个分支，而跳过后面的其他分支。
- 为了达到这个目标，必须要在每个分支最后添加`break;`语句。

### 4、switch case 中的 break

- `break`是 C语言 中的一个关键字，用于跳出 switch 语句。所谓 **跳出**，是指一旦遇到 `break`，就不再执行 switch 中的任何语句，包括当前分支中的语句和其他分支中的语句；也就是说，整个 switch 执行结束了，接着会执行整个 switch 后面的代码。

```c
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    switch(a){
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        case 5: printf("Five\n"); break;
        case 6: printf("Six\n"); break;
        default:printf("Other\n"); break;
    }
    return 0;
}
```

- 得到运行结果如下：

```c
3↙
Three
```

- 由于 default 是最后一个分支，匹配后不会再执行其他分支，所以也可以不添加`break;`语句也可。
- 关于`break`语句的更多内容，我会在后续讲 **循环语句** 时继续讲解。

### 5、switch case 语句中的 case 类型

- case 后面跟的整数类型，必须是 **整数** 或者 **常整表达式**，如下：

```c
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    switch(a){ 
        case 1: printf("One\n"); break;          // (1) 
        case '2' - '0': printf("Two\n"); break;  // (2)
        case 1 + 1 + 1: printf("Three\n"); break;// (3)
        case 4.0: printf("Four\n"); break;       // (4)
        case a: printf("Five\n"); break;         // (5)
        case a + 1: printf("Six\n"); break;      // (6)
        default:printf("Other\n"); break;        
    }
    return 0;
}
```

- (1) 正确，为整数；
- (2) 正确，字符减法，得到整数；
- (3) 正确，表达式结果为整数；
- (4) 错误，结果为浮点数；
- (5) 错误，结果为变量；
- (6) 错误，结果为变量表达式；