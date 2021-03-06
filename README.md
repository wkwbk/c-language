# C 语言笔记

## 介绍

### 计算机和编程语言

> 我们每天都在使用计算机，无论是桌面计算机还是智能手机，其实都是某种形式的计算机。要用计算机做某件事情，就需要使用某个具体的应用软件，这些应用软件都是用某种编程语言写出来，告诉计算机要如何为我们做事情的。编程语言就是用来描述我们要计算机如何做事情的语言。  
计算机和人脑完全不一样，计算机有自己的思维方式和行为习惯。所以有的事情人类很容易就做到了，计算机可能会很困难。而有的事情人类不擅长或者不乐意做，计算机却可能会很容易实现。学习编程就需要了解计算机做事情的方式方法，学会用计算机的方式来想问题，这就叫做计算思维。

### 程序

- 程序是用特殊的编程语言写出来表达如何解决问题的，不是用编程语言来和计算机交谈，而是描述要求它如何做事情的过程或方法。
- 程序是为了让计算机执行某些操作或解决某个问题而编写的一系列**有序指令的集合**。

### 认识 C 语言

- 标准的 C 语言有三十二个关键字，也就是说三十二个单词
- C 语言是结构式语言
- C 语言允许直接访问物理地址，可以直接对硬件进行操作
- C 语言程序代码生成质量高，程序执行效率高
- C 语言具备良好的可移植性

### C 语言优点

- 结构化的程序设计语言
  - 层次清晰，便于按模块化方式组织程序，易于调试和维护
  - 结构化的缺点也很明显，程序的可重用性差
- 语言简洁
  - 适合作为编程入门语言，使用灵活方便
- 可移植性好
  - 统计表明不同机器上的 C 语言编译程序 80% 的代码是公共的，C 语言的编译程序便于移植
- 功能强大
  - 既可用于系统软件的开发，也适合应用软件的开发

## 程序的执行

- 解释：借助一个程序，那个程序能试图理解你的程序，然后按照你的要求执行
- 编译：借助一个程序，就像一个翻译，把你的程序翻译成计算机真正能懂的语言（机器语言）写的程序，然后这个机器语言写的程序就能直接执行了
- 对于计算机的编程语言来说，语言本身是没有解释和编译的区分的，任何一种语言既可以解释执行也可以编译执行

### C 语言编译软件

- [Dev C++](https://sourceforge.net/projects/orwelldevcpp/)

### C 语言程序框架

```C
#include <stdio.h> // 预处理命令序列
int main()
{
  int a;           // 变量定义序列
  a = 0;           // 执行语句序列
  return 0;
}
```

以上编译预处理、变量定义、执行语句等三个序列可称为 C 程序结构上的三大区域，这三大区域在程序中的顺序是不可调换位置的，程序也将按这个顺序执行。

#### 语句结束符号

- 一条语句都由分号结束。
- 一条语句可跨越多行。
- 例如跨越两行的语句：

  ```C
  toral=a+b+c+
      d+e+f+g;
  ```

- 等价：

  ```C
  toral=a+b+c+d+e+f+g;
  ```

#### 注释语句两种格式

- //  单行注释
- /*.....*/  多行的注释
- 例如：

  ```C
  // 程序求两个数和
  c = a + b;  //Add a and b
  /* First line
  And second line
  */
  ```

## C 语言关键字

关键字（Keywords）是由 C 语言规定的具有特定意义的字符串，通常也称为保留字。我们定义的标识符不能与关键字相同，否则会出现错误。

你也可以将关键字理解为具有特殊含义的标识符，它们已经被系统使用，我们不能再使用了。

标准 C 语言中一共规定了 32 个关键字，如下表所示：

|  关键字  |                        说明                        |
| :------: | :------------------------------------------------: |
|   auto   |                    声明自动变量                    |
|  short   |                声明短整型变量或函数                |
|   int    |                 声明整型变量或函数                 |
|   long   |                声明长整型变量或函数                |
|  float   |                声明浮点型变量或函数                |
|  double  |                声明双精度变量或函数                |
|   char   |                声明字符型变量或函数                |
|  struct  |                声明结构体变量或函数                |
|  union   |                  声明共用数据类型                  |
|   enum   |                    声明枚举类型                    |
| typedef  |                用以给数据类型取别名                |
|  const   |                    声明只读变量                    |
| unsigned |              声明无符号类型变量或函数              |
|  signed  |              声明有符号类型变量或函数              |
|  extern  |             声明变量是在其他文件正声明             |
| register |                   声明寄存器变量                   |
|  static  |                    声明静态变量                    |
| volatile |         说明变量在程序执行中可被隐含地改变         |
|   void   |      声明函数无返回值或无参数，声明无类型指针      |
|    if    |                      条件语句                      |
|   else   |           条件语句否定分支（与 if 连用）           |
|  switch  |                    用于开关语句                    |
|   case   |                    开关语句分支                    |
|   for    |                    一种循环语句                    |
|    do    |                  循环语句的循环体                  |
|  while   |                 循环语句的循环条件                 |
|   goto   |                   无条件跳转语句                   |
| continue |            结束当前循环，开始下一轮循环            |
|  break   |                    跳出当前循环                    |
| default  |              开关语句中的 “其他” 分支              |
|  sizeof  |                  计算数据类型长度                  |
|  return  | 子程序返回语句（可以带参数，也可不带参数）循环条件 |

## 计算

- 我们要让计算机所计算，就需要像这样找出计算的步骤，然后用编程语言写出来
- 计算机做的所有事情都叫做计算
- 计算的步骤就是**算法**
- 算法是一个定义明确的计算过程，可以以一些值或一组值作为输入并产生一些值或一组值作为输出。因此**算法就是将输入转为输出的一系列计算步骤**。简而言之，算法就是可完成特定任务的一系列步骤。

### [如何输入](https://github.com/wkwbk/c-language/blob/main/.c/change.c)

- 输入也在终端窗口中
- 输入是以行为单位进行的，行的结束标志就是你按下回车键。在你按下回车键之前，你的程序不会读到任何东西
- ``scanf("%d",&price);``
  - 要求 ``scanf`` 这个函数读入一个整数，读到的结果赋值给变量 ``price``
  - 一个 ``scanf`` 可以读取多个变量，[例如](https://github.com/wkwbk/c-language/blob/main/.c/plus.c)；也可以使用多个 ``scanf`` 读取多个变量
  - ``%d`` 说明后面有一个整数要输入在这个位置上
  - 小心 ``price`` 前面的 ``&``

### [如何输出](https://github.com/wkwbk/c-language/blob/main/.c/hello.c)

- ``printf("23+43=%d\n",23+43);``
- ``%d`` 说明后面有一个整数要输出在这个位置上
- ``printf("Hello World\n");``
- ``""`` 里面的内容叫做 “字符串”，``printf`` 会把其中的内容原封不动地输出
- ``\n`` 表示需要在输出的结果后面换一行

### 变量

- 变量是一个保存数据的地方，当我们需要在程序里保存数据时，比如上面的例子中要记录用户输入的价格，就需要一个变量来保存它
- 首次使用变量时，变量必须要有确定的值，否则会导致运算错误。
- 变量必须先定义在使用，否则程序无法为其分配存储空间。
- 变量定义的一般形式：
  - ``<类型名称>< 变量名称 >;``
  - ``int price;``
  - ``int amount;``
  - ``int price,amount;``
- ``int price=0;``
  - 这一行，定义了一个变量。变量的名字是 ``price``，类型是 ``int``，初始值是 ``0``

### 变量的名字

- 变量需要一个名字，变量的名字是一种 “标识符”，意思是它是用来表示这个和那个不同的名字
- 定义变量时，我们使用了诸如 a、abc、mn123 这样的名字，它们都是程序员自己起的，一般能够表达出变量的作用，这叫做标识符（Identifier）
- **标识符的命名规则：**
  - 只能由字母 `A~Z`,`a~z`、数字 `0~9` 和下划线 `_` 组成
  - 只能以字母或下划线开头（不能是数字）
  - 不能使用[C 语言的关键字](https://lisir.me/posts/df79b88b/#C语言关键字)
  - 标识符的有效长度随系统而异，但至少前 8 个字符有效，如果超长，则超长部分被舍弃
- **以下是合法的标识符：**

  ```txt
  a, x,  x3, BOOK_1, sum5
  ```

- **以下是非法的标识符：**

  ```txt
  3s    不能以数字开头
  s*T    出现非法字符 *
  -3x    不能以减号（-）开头
  bowy-1    出现非法字符减号（-）
  ```

- **在使用标识符时还必须注意以下几点：**

  - C 语言虽然不限制标识符的长度，但是它受到不同编译器的限制，同时也受到操作系统的限制。例如在某个编译器中规定标识符前 128 位有效，当两个标识符前 128 位相同时，则被认为是同一个标识符。
  - 标识符虽然可由程序员随意定义，但标识符是用于标识某个量的符号，因此，命名应尽量有相应的意义，以便于阅读和理解，作到 “顾名思义”。
  - 在标识符中，大小写是有区别的，例如 BOOK 和 book 是两个不同的标识符。

### 赋值

- ``=`` 表示赋值，和数学不同，``a=b`` 在数学中表示关系，既 ``a`` 和 ``b`` 的值一样
- 在程序设计中，``a=b`` 表示要求计算机做一个动作：将 ``b`` 的值赋给 ``a``
- 关系是静态的，而动作是动态的。在数学中，``a=b`` 和 ``b=a`` 是等价的，而在程序设计中，两者的意思完全相反
- C 语言并没有强制要求所有的变量都在定义的地方做初始化，但是 **所有的变量在第一次被使用（出现在赋值运算的右边）之前应该被赋值一次**

## 数据类型

### 浮点数

- 带小数点的数值。浮点这个词的本意就是指小数点是浮动的，是计算机内部表达非整数（包含分数和无理数）的一种方式
- 人们借用浮点数这个词来表达所有带小数点的数
- 当浮点数和整数放到一起运算时，C 会将整数转换成浮点数，然后进行浮点数的运算，[例如](https://github.com/wkwbk/c-language/blob/main/.c/height-1.c)

### 单精度和[双精度](https://github.com/wkwbk/c-language/blob/main/.c/height-2.c)

- double 的意思是 “双”，它本来是“双精度浮点数” 的第一个单词，人们用来表示浮点数类型
- 除了 double，还有 float（意思就是浮点！）表示单精度浮点数

## 表达式

> 一个表达式是一系列运算符和算子的组合，用来计算一个值

### 算术运算符

- 运算符（operator）是指进行运算的动作，比如加法运算符 ``+``，减法运算符 ``-``
- 算子（operand）是指参与运算的值，这个值可能是常数，也可能是变量，还可能是一个方法的返回值

**四则运算：**

| 四则运算 | C 符号 | 意义  |
| :------: | :----: | :---: |
|    +     |   +    |  加   |
|    -     |   -    |  减   |
|    ×     |   *    |  乘   |
|    ÷     |   /    |  除   |
|          |   %    | 取余  |
|    ()    |   ()   | 括号  |

**优先级：**

| 优先级 | 运算符 |   运算   |   结合关系   | 举例  |
| :----: | :----: | :------: | :----------: | :---: |
|   1    |   +    | 单目不变 |   自左向右   | a*+b  |
|   1    |   -    | 单目取负 |   自左向右   | a*-b  |
|   2    |   *    |    乘    |   自左向右   |  a*b  |
|   2    |   /    |    除    |   自左向右   |  a/b  |
|   2    |   %    |   取余   |   自左向右   |  a%b  |
|   3    |   +    |    加    |   自左向右   |  a+b  |
|   3    |   -    |    减    |   自左向右   |  a-b  |
|   4    |   =    |   赋值   | **自右向左** |  a=b  |

### [递增递减运算符](https://github.com/wkwbk/c-language/blob/main/.c/a%2B%2Band%2B%2Ba.c)

- ``++``,``--`` 是两个很特殊的运算符，它们是单目运算符，这个算子还必须是变量
- 它们的作用就是给这个变量 + 1 或者 - 1
  - ``count++;`` 等于 ``count += 1;`` 等于 ``count = count + 1;``
- ``++`` 和 ``--`` 可以放在变量的前面，叫做前缀形式，也可以放在变量的后面，叫做后缀形式
- 后缀 ``++`` 的值是 +1 之前的值，先输出再 +1，前缀 ``++`` 的值是 +1 之后的值，先 +1 再输出
- 可以单独使用，但是不要组合进表达式

### 关系运算符

| 优先级 | 运算符 |   名称   | 举例  |     意义     |
| :----: | :----: | :------: | :---: | :----------: |
|   1    |   >    |   大于   |  a>b  |   a 大于 b   |
|   1    |   >=   | 大于等于 | a>=b  | a 大于等于 b |
|   1    |   <    |   小于   |  a<b  |   a 小于 b   |
|   1    |   <=   | 小于等于 | a<=b  | a 小于等于 b |
|   2    |   ==   |   等于   | a==b  |   a 等于 b   |
|   2    |   !=   |  不等于  | a!=b  |  a 不等于 b  |

- 当两个值的关系符合关系运算符的预期值时，关系运算的结果为整数 1，否则为整数 0，[例如](https://github.com/wkwbk/c-language/blob/main/.c/relational-operation-result.c)
- 所有关系运算符优先级比算术运算符低，但是比赋值运算符高

### 复合赋值

- 5 个算术运算符 ``+ - * / %`` 可以和赋值运算符 ``=`` 结合起来，形成复合赋值运算符
- 如：``+=``,``-=``,``*=``,``/=`` 和 ``%=``
  - ``total += 5;`` 等于 ``total = total + 5;``
  - ``total += (sum+100)/2;`` 等于 ``total = total + (sum+100)/2;``
  - ``total *= sum+12;`` 等于 ``total = total* (sum+12);``
  - ``total /= 12 + 6;`` 等于 ``total = total / (12+6);``
- 注意两个运算符中间不要有空格

## 判断与循环

### [if 判断](https://github.com/wkwbk/c-language/blob/main/.c/time-2.c)

- 一个基本的 if 语句由一个关键字 if 开头，跟上在括号里的一个表示条件的逻辑表达式，然后是一对大括号 ``{}`` 之间的若干条语句
- 如果表示条件的逻辑表达式的结果不是零，那么就执行后面跟着的这对大括号中的语句，否则就跳过这些语句不执行，而继续下面的其他语句

```mermaid
graph LR
A([开始]) -->
B{条件} -- Yes --> C[语句体] --> D[后续语句]
B{条件} -- No --> D[后续语句] --> E[结束]
```

### 循环

- while 语句
  - while 语句是一个循环语句，它会首先判断一个条件是否满足，如果条件满足，则执行后面紧跟着的语句或语句括号，然后再次判断条件是否满足，如果条件满足则再次执行，直到条件不满足为止
  - 后面紧跟的语句或语句括号，就是循环体

```mermaid
graph LR
A([开始]) --> B{条件} -- Yes --> C[语句体]
C[语句体] --> B{条件}
B{条件} -- No --> D[后续语句] --> E[结束]
````

- do while 语句
  - do while 循环和 while 循环很像，唯一的区别是我们在循环体执行结束的时候才来判断条件
  - 与 while 循环相同的是，条件满足时执行循环，条件不满足时结束循环

```mermaid
graph LR
A([开始]) --> B[语句体] --> C{条件}
C{条件} -- Yes --> B[语句体]
C{条件} -- No --> D[后续语句] --> E[结束]
````
