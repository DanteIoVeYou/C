3/30

## 作用域

extern



## 生命周期

1. 变量的生命周期指变量的创建和销毁之间的时间段

2. 局部变量的生命周期：进入局部范围，生命开始；出局部范围，生命结束

3. 全局变量的生命周期：程序的生命周期



## 常量

1. 字面常量

2. const修饰的常变量，该变量具有常属性（不能改变的属性）

3. #define定义的标识符长量

4. 枚举常量：可以一一列举的常量 

   enum{

   MALE,

   FEMALE,

   SECRET

   };

   默认，MALE=0,FEMALE=1,SECRET=2

5. 字符串

   由一串双引号引起来的字符称为字符串字面值

   用字符数组可以存储字符串



6. 转义字符

   三字母词 ??) ------> ]

   \\'

   \\"

   \			ddd

   \





## 操作符

- 算术操作符：+ - * / %

- 移位操作符：>> ,<<        左移最后一位补0

- 按位操作符：& ^ |



- 赋值操作符

- 单目操作符

  sizeof(变量) = sizeof 变量 当被操作的是变量名是可以省略括号



### static 的修饰

1. static修饰局部变量，改变了局部变量的生命周期（本质上改变了变量的存储类型）

2. static修饰全局变量

   ​	全局变量在整个工程中都可以使用，是因为全局变量具有外部连接属性。而static修饰了全局变量后，就变成了内部链接属性，其他源文件就不能链接到这个静态全局变量了。使得这个全局变量只能在自己所在的源文件内部（.c）内部使用，其他源文件不能使用。

3. static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用

   本质上：static是将函数的外部链接属性变成了内部链接属性，和修饰全局变量一样



### define定义常量和宏



4/9

C语言是结构化的程序设计语言

## 分支语句

- if

- switch

  case 整形常量表达式------入口

  break------出口

## 循环语句

- while
- do while
- for

- goto语句



EOF：文件结束标志  按下ctrl^Z结束

getchar()：屏幕----------缓冲区----------键盘





4/11

``while((tmp=getchar())!='\n');``

- 二分查找
- 广告横幅逐字打印
  - Sleep(1000);
  - system("cls")l;
- 模拟三次密码登录
- 猜数字游戏
  - srand(时间戳)------>srand((unsigned int)time(NULL));
  - rand函数

4/13

## 辗转相除法



## goto语句



## 函数

- 函数是什么
- 库函数
- 自定义函数
- 函数参数
- 函数调用
- 函数的嵌套调用和链式访问
- 函数的声明和定义
- 函数递归



常用函数

- IO函数
- 字符串操作函数
- 字符操作函数
- 内存操作函数
- 时间/日期函数
- 数学函数
- 其他库函数



实际参数：可以是常量、变量、表达式、函数，在函数调用时，它们必须有确定的值

形式参数：进函数创建，出函数销毁，形参只在函数内有效；形参是实参的一份临时拷贝





4/16

### 函数的嵌套调用和链式访问

链式访问：把一个函数的返回值作为另一个函数的参数

4/18

## 递归



### 递归练习

- 输入1234，打印1 2 3 4
- 不用中间变量实现strlen
- 实现阶乘
- 实现第n个斐波那契数
- 汉诺塔
- 青蛙跳台阶

### 定义

函数自己调用自己；把一个大型复杂的问题层层转化成一个与原问题规模较小的问题来求解

### 递归的必要条件

- 递归的限制条件
- 每次调用递归后，越来越接近这个限制条件

### 栈溢出问题



- 栈区：局部变量、函数形参

- 堆区：动态内存分配的内存

- 静态区：全局变量、静态变量



写递归代码时候：

1. 不能死递归，都要有跳出条件，每次递归逼近跳出条件
2. 递归层次不能太深



www.stackoverflow.com





4/20

##  数组

### 定义

数组是一组相同类型元素的集合

C99语法支持变长数组

[]下标引用操作符



4/23

## 二维数组

### 创建

- int arr\[][]

### 初始化

- 可以省略行但不能省略列

### 访问

- arr\[][]访问

### 在内存中的存储------连续存放

- 确定下一行存储的位置
- 只要拿到首元素的地址，就能确定所有元素的位置

- 将二维数组看作若干个一维数组

### 数组作为函数参数

- 数组名是什么？是首元素地址

- 但是有2个例外
  - sizeof(arr)中，数组名是整个数组，表示求整个数组的大小
  - &arr中，数组名是整个数组，表示取整个数组的地址



4/27

 ## 扫雷优化

1. 如果不是雷，周围没有雷------展开一片

2. 标记雷

5/7

## 操作符

### 算术操作符*



### 移位操作符



### 位操作符

1. &		按（2进制）位与
2. |         按位或

3. ^         按位异或

### 赋值运算符



5/9

### 单目操作符

!------逻辑反操作

sizeof 

- sizeof(int [10])
- 其中 int [10]是数组类型，把数组名去掉就是数组类型
- sizeof()括号内部放的表达式不参与运算

~------按位取反





整形提升是按照变量的数据类型的符号位来进行提升的

无符号的整形提升，高位补0

a+b 有两个属性：值属性和类型属性

算术转换

如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数转换为另一个操作数的类型，否则操作就无法进行。下面的层次体系称为寻常算术转换

long double

double

float

unsigned long int

long int

unsigned int 

int

如果某个操作数的类型在上面这个表中排名较低，那么首先要转化成另一个操作数的类型再进行运算。



操作符的属性

复杂表达式的求值有三个影响因素

操作符的优先级

操作符的结合性

​				是否控制求值顺序 && | ?:

两个相邻的操作符执行先后顺序先看他们的优先级，优先级相同再看结合性

1:50讲作业



5/11

第六节、指针

野指针

造成野指针的原因：1、未初始化指针2、越界访问3、指针指向的空间释放了



如何规避野指针问题

1、初始化指针，不知道初始化成什么的时候直接初始化为NULL（NULL定义在stdio.h中）

2、小心指针越界（C语言本身不检查指针越界问题）

3、指针指向空间释放及时置NULL

4、使用前检查指针有效性if(p!=NULL)



指针运算

指针加减整数

指针减指针：得到的是两个指针之间的元素个数。实现一下my_strlen

指针关系运算



C语言标准：

允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的地址进行比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较



指针和数组

指针数组：





第7节

结构体



结构体成员的访问：. 和->

参数传参是压栈操作,函数栈帧的创建和销毁



第8节

实用调试技巧



调试的基本步骤

1、发现程序错误的存在

2、以隔离、消除等方式对错误进行定位

3、确定错误产生的原因

4、提出纠正错误的解决办法

5、对程序错误予以改正，重新测试



f5------启动调试，一口气调试完

f9（设置/取消断点）+f5------调试到断点处结束

f10------逐过程

f11------逐语句



查看程序当前的信息

函数调用堆栈------返回函数调用逻辑

注：栈=堆栈

条件断点！！！牛逼



8：59

《明解C语言》

《C语言深度剖析》



如何coding

模拟实现strcpy

 5/16

实现my_strlen

编程常见的错误

编译型错误：少个分号

链接型错误：要不符号不存在,要不符号写错了

运行时错误：

思维导图工具



5/21

release版本会对代码进行优化！

数据的存储

类型的基本归类

整形家族 limits.h

浮点型家族 float.h

构造类型（自定义类型）家族

> 数组
>
> struct结构体类型
>
> enum枚举
>
> union联合体

指针类型

空类型

> void
>
> 函数返回类型；函数参数；指针





整形在内存中的存储

根据不同的数据类型在创建变量时给变量开辟内存空间

为什么要存补码呢

CPU只有加法器，补码与源码相互转换，其运算过程是相同的，不需要增加额外的逻辑电路。

计算机组成原理

大端存储：把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处

小端存储：把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处

补充：

1.char 到底是signed char 还是 unsigned char C语言没有规定

int 是 signed int

short 是 signed short

2.10000000直接被定义为-1

9：05分



浮点型在内存中的存储



5/23

float类型（32个bit位）

1+8+23

double

1+11+52q



5/30

回调函数

qsort 快速排序

整形数据

字符串数据

结构体类型

void类型指针------无具体类型------垃圾桶



6/1

6/6

字符串和内存函数



长度不受限的字符串函数

strcpy字符串拷贝

strcat字符串追加

strcmp字符串比较



长度受限的字符串函数

strncpy

strncat

strtok

strerror(errno) #include<errno.h>



kmp算法





6/8

内存操作函数

1.memcpy：拷贝不重叠的内存

2.memmove：拷贝或重叠的内存

3.memcmp

4.memset



6/25

结构体



对齐数=该成员大小 与 编译器默认对齐数的较小者

VS------8

Linux------没有默认对齐数

结构体大小计算规则

1. 结构体第一个成员放在偏移量为0的位置
2. 结构体第二个及以后的成员放在其对齐数的整数倍的偏移量处
3. 结构体的总大小为其成员中对齐数最大者的整数倍
4. 如果嵌套了结构体，嵌套的结构体对齐到其成员中最大对齐数的整数倍处，结构体的总大小就等于所有成员（含嵌套的结构体的成员）的最大对齐数的整数倍

内存对齐是为了用空间换取时间；不是所有硬件平台都能访问任意地址的数据



修改默认对齐数

#progma pack(2)

struct s

{

char ch;

int i;

char ch2;

};

progma pack()



offsetof宏计算成员的偏移量



结构体传参



位段



枚举

int a=Color::Blue;
