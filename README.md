# 数据结构

基于严蔚敏老师的数据结构，源码以及部分练习题  
因将严蔚敏老师基于C++的引用 ‘&’ 用指针实现，部分代码显得有些繁琐  
编译环境为 Linux ubuntu + gcc + vim   
''':def.h : 文件用于声明变量等实现'''  
''':extern.h : 实现外部函数引用，只用 main.c 测试'''  

`函数指针
将函数名当做指针传递到另一个函数参数中，可以实现在函数中直接使用函数的功能
int  a(int x, int y){ return 0;};   //要当做参数的函数
bool another_function( int (*a)(int) )
main{
    int  (*f)(int,int)  =  a;     ／／定义函数指针
    another_function( f );    ／／把函数指针当做参数传递
}｀
