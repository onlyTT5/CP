# （07）- ASCII码 | 来，跟我念：阿斯克二马

[toc]

## 一、ASCII 码简介

### 1、ASCII 码的定义

- ==ASCII 码==(即 **American Standard Code for Information Interchange**)，翻译过来是美国信息交换标准代码。
- 我们一般念成 ask 2 马。

### 2、ASCII 码的起源

- 它是一套编码系统。
- 由于计算机用 高电平 和 低电平 分别表示 1 和 0，所以，在计算机中所有的数据在存储和运算时都要使用二进制数表示，例如，像a-z、A-Z这样的52个字母以及0-9的数字还有一些常用的符号（例如?*#@!@#$%^&*()等）在计算机中存储时也要使用二进制数来表示，具体用哪些二进制数字表示哪个符号，每个人都可以约定自己的一套规则，这就叫编码。
- 即 一个数字 和 一个字符 的一一映射。
- 为了通信而不造成混淆，所以需要所有人都使用相同的规则。

### 3、ASCII 码的表示方式

- 标准ASCII 码，使用 7 位二进制数（剩下的1位二进制为0）来表示所有的大写和小写字母，数字`0`到`9`、标点符号，以及在英语中使用的特殊控制字符。
- 简单的就可以认为：一个数字对应一个字符。具体如下表所示：

![20210619064922444](D:/GitRep/CP/notes/%EF%BC%8807%EF%BC%89-%20ASCII%E7%A0%81%20%20%E6%9D%A5%EF%BC%8C%E8%B7%9F%E6%88%91%E5%BF%B5%EF%BC%9A%E9%98%BF%E6%96%AF%E5%85%8B%E4%BA%8C%E9%A9%AC.assets/20210619064922444.png)

## 二、ASCII码的输出

- ASCII 码对应的字符用单引号括起来，并且是可以按照两种方式来输出的，分别为：字符形式 和 整数形式。

### 1、字符

- 当成字符用的时候，用格式化输出`%c`来控制，如下：

```c
#include <stdio.h>
int main() {
	printf("%c\n", '0');
	printf("%c\n", 'A');
	printf("%c\n", 'a');
	printf("%c\n", '$');
	return 0;
} 
```

- 得到的输出结果如下：

```c
0
A
a
$
```

### 2、整数

- 当成整数用的时候，用格式化输出`%d`来控制，如下：


   ```c
   #include <stdio.h>
   int main() {
   	printf("%d\n", '0');
   	printf("%d\n", 'A');
   	printf("%d\n", 'a');
   	printf("%d\n", '$');
   	return 0;
   } 
   ```

   - 得到的输出结果如下：

   ```c
   48
   65
   97
   36
   ```

   - 这是因为一个字符代表的是一个整数到符号的映射，它本质上还是一个整数，所以我们可以用整数的形式来输出。字符`'0'`的整数编码为48，字符`'1'`的整数编码为49，以此类推。

## 三、ASCII码的运算

- 既然当成了整数，那么就可以进行简单的四则运算了。
- 我们简单来看下下面这段代码：

```c
#include <stdio.h>
int main() {
	printf("%c\n", '0' + 5);
	printf("%c\n", 'A' + 3);
	printf("%c\n", 'a' + 5);
	printf("%c\n", '$' + 1);
	return 0;
} 
```

- 它的输出如下：

```c
5
D
f
%
```

- 字符加上一个数字，我们可以认为是对字符编码进行了一个对应数字的偏移，字符`'0'`向右偏移 5 个单位，就是字符`'5'`；同样的，`'A'`向右偏移3个单位，就是字符`'D'`。

> 【例题1】给出如下代码，给出它的输出结果。

```c
#include <stdio.h>
int main() {
	printf("%c\n", 'A' - 10);
	return 0;
}
```

## 四、ASCII码的比较

- ASCII 码既然可以和整数无缝切换，那么自然也可以进行比较了。
- 通过上一节，我们了解到了 `'0'`加上`1`以后等于`'1'`，那么顺理成章可以得出：`'0' < '1'`。
- 同样可以知道：`'a' < 'b'`、`'X' < 'Y'`。

> 【例题2】请问 `'a' < 'A'`还是 `'a' > 'A'`。

