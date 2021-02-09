/* 初识函数指针 */
#include <stdio.h>
int Add(int x,int y)
{
    return x+y;
}
int main()
{
    int a = 10,
        b = 20;
    int (*p_fun)(int,int) = &Add;  //省略&也是一样的，和数组类似，当然函数并没有首元素之说
    printf("%d\n",Add(a,b));
    printf("%d",(*p_fun)(2,6));  //函数指针给括号括起来，不然以为是个函数，而且没括号是erroe的
    return 0;
}
