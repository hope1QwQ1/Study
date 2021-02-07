/* 检查系统是大端存储还是小端存储,百度2015系统工程师面试题10分 */
#include <stdio.h>
int check_sys()
{
    int a = 1;
    return (*(char*)&a);
}
int main()
{
    int ret = check_sys();
    if(ret == 1)
    {
        printf("小端存储\n");
    }
    else
    {
        printf("大端存储\n");
    }
    return 0;
}
