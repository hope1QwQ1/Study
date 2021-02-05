/* 自定义函数实现strlen库函数功能 */
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* len)  //不能修改字符串
{
    assert(*len != NULL);  //保证指针的有效性
    int count = 0;
    while(*len != '\0')  //当首元素不等于48的时候进入循环
    {
        count++;        //计数
        len++;      //指向下一个地址
    }
    return count;
}
int main(void)
{
    char arr[] = "bit";
    int len = my_strlen(arr);
    printf("%d ",len);
    return 0;
}
