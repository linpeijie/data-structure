# 数据结构

基于严蔚敏老师的数据结构，源码以及部分练习题  
因将严蔚敏老师基于C++的引用 ‘&’ 用指针实现，部分代码显得有些繁琐  
编译环境为 Linux ubuntu + gcc + vim   

```:def.h : 文件用于声明变量等实现```  
```:extern.h : 实现外部函数引用，只用 main.c 测试  ```

## 1.函数指针

```将函数名当做指针传递到另一个函数参数中，可以实现在函数中直接使用函数的功能
int  a(int x, int y){ return 0;};               //要当做参数的函数
bool another_function( int (*a)(int) );          //接受函数指针的函数
main{
    int  (*f)(int,int)  =  a;                   ／／定义函数指针
    another_function( f );                      ／／把函数指针当做参数传递
}
```
## 2.指向指针的指针(Pointers to Pointers)
```主要用于直接在main函数中实现C++的引用功能'&'
typedef struct L{
    struct L *next;
}L,*LL;

LL func(LL *q){
    (*q)->next = NULL;
}

main(){
    LL p;
    func(&p);
    此时p已经被改变，可以直接使用
}
```
## 3.getchar()吸收多余的 \n 转义字符
```
因为在创建二叉树的算法中用字符变量存储输入数据，所以在 scanf(); 语句后一定要加上 getchar()吸收掉 ‘\n’,否则回车键也会被当作一个字符接受
    scanf("%c",&ch);
    getchar();
```
