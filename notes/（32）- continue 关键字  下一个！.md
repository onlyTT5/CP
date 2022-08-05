# （32）- continue 关键字 | 下一个！

[toc]

## 一、continue 关键字简介

- `continue`是一个关键字，`continue;`是一个语句，区别就在于后者加了个分号。
- `continue;`主要作用是跳过循环体中剩余的语句而强制进入下一次循环，主要用在两个地方：
-   1）`while`/`do while`语句中；
-   2）`for`语句中；

## 二、for 中的 continue

- 对于一个字符串，我们输出时要求屏蔽一些字符，可以利用如下代码实现：

```c
#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char s[1000];
    while(scanf("%s", s) != EOF) {
	    for(i = 0; s[i]; ++i) {
	        if(s[i] == 'x') continue;     // (1)
	        printf("%c", s[i]);
	    }
	    puts("");
    }
    return 0;
} 
```

- 上文中 (1) 的地方代表遇到字符`'x'`时，跳过本次循环，这样一来，它就会执行`i++`这个表达式，而不会执行`printf("%c", s[i]);`这个语句。从而起到跳过输出字符`'x'`的作用。

## 二、while 中的 continue

- 对于 while 语句，我们是否也可以利用如下代码实现：

```c
#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char s[1000];
    while(scanf("%s", s) != EOF) {
	    i = 0;
        while(s[i]) {
	        if(s[i] == 'x') continue;     // (1)
	        printf("%c", s[i]);
	        ++i;
	    }
	    puts("");
    }
    return 0;
} 
```

- 这段代码是有漏洞的，设想一下 (1) ，如果遇到`s[i] == 'x'`条件成立，那么执行`continue;`以后，`i`的值其实不会自增，这样就会导致`s[i] == 'x'`条件一直成立，从而导致一直循环。
- 我们可以把代码改成如下形式：

```c
#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char s[1000];
    while(scanf("%s", s) != EOF) {
	    i = -1;                            // (1)
        while(s[++i]) {                    // (2)
	        if(s[i] == 'x') continue;
	        printf("%c", s[i]);
	    }
	    puts("");
    }
    return 0;
} 
```

- (1) 初始化`i`从 −1 开始，每次循环先自增`i`，这样无论有没有`continue;`，本次循环下，`i`的值都已经确定自增过了，不会产生死循环的情况。