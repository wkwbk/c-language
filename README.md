# C语言笔记

## 计算机语言

- 程序是用特殊的编程语言写出来表达如何解决问题的
- 不是用编程语言来和计算机交谈，而是描述要求它如何做事情的过程或方法。

## 算法

- 我们要让计算机所计算，就需要像这样找出计算的步骤，然后用编程语言写出来
- 计算机做的所有事情都叫做计算
- 计算的步骤就是算法

## 程序的执行

- 解释：借助一个程序，那个程序能试图理解你的程序，然后按照你的要求执行
- 编译：借助一个程序，就像一个翻译，把你的程序翻译成计算机真正能懂的语言（机器语言）写的程序，然后这个机器语言写的程序就能直接执行了
- 对于计算机的编程语言来说，语言本身是没有解释和编译的区分的，任何一种语言既可以解释执行也可以编译执行

## C语言编译软件

- [Dev C++](https://sourceforge.net/projects/orwelldevcpp/)

## C语言程序框架

```C
#include <stdio.h>
int main()
{

  return 0;
}
```

## [printf 输出](https://github.com/wkwbk/c-language/blob/main/.c/hello.c)

- ``printf("Hello World\n");``
- ``""``里面的内容叫做“字符串”，``printf``会把其中的内容原封不动地输出
- ``\n``表示需要在输出的结果后面换一行

### 程序的错误

- 编译的时候发现的错误所在的地方会以红色的底表示出来
- 具体的错误原因在下方的窗口里（是英文的）
- C的编译器给出的错误往往不那么好“猜”

### 做计算

- ``printf("23+43=%d\n",23+43);``
  - ``%d``说明后面有一个整数要输出在这个位置上

### 四则运算

|四则运算|C符号|意义|
|:----:|:----:|:----:|
|+|+|加|
|-|-|减|
|×|*|乘|
|÷|/|除|
||%|取余|
|( )|( )|括号|

## [scanf 输入](https://github.com/wkwbk/c-language/blob/main/.c/change.c)

- ``scanf("%d",&price);``
  - 要求``scanf``这个函数读入一个整数，读到的结果赋值给变量``price``
  - 一个``scanf``可以读取多个变量，[例如](https://github.com/wkwbk/c-language/blob/main/.c/plus.c)；也可以使用多个``scanf``读取多个变量
  - ``%d``说明后面有一个整数要输入在这个位置上
  - 小心``price``前面的``&``
- 输入也在终端窗口中
- 输入是以行为单位进行的，行的结束标志就是你按下回车键。在你按下回车键之前，你的程序不会读到任何东西

### 变量

- ``int price=0;``
  - 这一行，定义了一个变量。变量的名字是``price``，类型是``int``，初始值是``0``
- 变量是一个保存数据的地方，当我们需要在程序里保存数据时，比如上面的例子中要记录用户输入的价格，就需要一个变量来保存它
- 首次使用变量时，变量必须要有确定的值，否则会导致运算错误。
- 变量必须先定义在使用，否则程序无法为其分配存储空间。
- 变量定义的一般形式：
  - ``<类型名称><变量名称>;``
  - ``int price;``
  - ``int amount;``
  - ``int price,amount;``

### 变量的名字

- 变量需要一个名字，变量的名字是一种“标识符”，意思是它是用来表示这个和那个不同的名字
- 标识符有标识符的构造规则，基本的原则是：标识符只能由字母、数字、和下划线组成，数字不可以出现在第一个位置上，[C语言的关键字](https://lisir.me/posts/df79b88b/#%E5%85%B3%E9%94%AE%E5%AD%97)不可以用作标识符

### 赋值

- ``=``表示赋值，和数学不同，``a=b``在数学中表示关系，既``a``和``b``的值一样
- 在程序设计中，``a=b``表示要求计算机做一个动作：将``b``的值赋给``a``
- 关系是静态的，而动作是动态的。在数学中，``a=b``和``b=a``是等价的，而在程序设计中，两者的意思完全相反
- C语言并没有强制要求所有的变量都在定义的地方做初始化，但是**所有的变量在第一次被使用（出现在赋值运算的右边）之前应该被赋值一次**

## float 单精度浮点数

- 带小数点的数值。浮点这个词的本意就是指小数点是浮动的，是计算机内部表达非整数（包含分数和无理数）的一种方式
- 人们借用浮点数这个词来表达所有带小数点的数
- 当浮点数和整数放到一起运算时，C会将整数转换成浮点数，然后进行浮点数的运算，[例如](https://github.com/wkwbk/c-language/blob/main/.c/height-1.c)

## [double 双精度浮点数](https://github.com/wkwbk/c-language/blob/main/.c/height-2.c)

- double的意思是“双”，它本来是“双精度浮点数”的第一个单词，人们用来表示浮点数类型
- 除了double，还有float（意思就是浮点！）表示单精度浮点数

## 运算符

- 运算符（operator）是指进行运算的动作，比如加法运算符“+”，减法运算符“-”
- 算子（operand）是指参与运算的值，这个值可能是常数，也可能是变量，还可能是一个方法的返回值
- 运算符优先级；
|优先级|运算符|运算|结合关系|举例|
|:----:|:----:|:----:|:----:|:----:|
|1|+|单目不变| 自左向右 | a*+b|
|1|-|单目取负| 自左向右 | a*-b|
|2|*|   乘   | 自左向右 | a*b |
|2|/|   除   | 自左向右 | a/b |
|2|%|  取余  | 自左向右 | a%b |
|3|+|   加   | 自左向右 | a+b |
|3|-|   减   | 自左向右 | a-b |
|4|=|  赋值  | 自右向左 | a=b |
