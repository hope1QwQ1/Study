/* 实现库函数strcpy功能 */
#include <stdio.h>

//此程序满分十分只有六分
//void my_strcpy(char* dest,char* src)  //dest为目的地，src为源头
//{
//    while(*src != '\0')  //这个循环控制条件意味着\0并不会被拷贝
//    {
//        *dest = *src;  //此时都指向首元素，然后解引用
//        src++;         //指向下一个元素
//        dest++;
//    }
//    *dest = *src;      //最后都来到了最后一个元素，再把\0放到目的地的最后一个元素位置
//}

////一次小优化,不过还不够只是减少了两行而已
//void my_strcpy(char* dest,char* src)
//{
//    while(*src != '\0')
//    {
//        *dest++ = *src++;  //先赋值再++，所以没问题
//    }
//    *dest = *src;
//}

//二次优化，也才得7分
//void my_strcpy(char* dest,char* src)
//{
//    while(*dest++ = *src++)  //这里同时也把\0赋值过去了，并且刚好\0是0,循环也就结束了
//    {
//        ;
//    }
//}

//三次次优化，但是最多也就7分多一丢丢
//void my_strcpy(char* dest,char* src)  //万一参数是一个NULL也就意味着空指针，指向的是0
//{
//    if(dest!=NULL && src!=NULL)   //加个判断条件不至于程序直接挂掉
//    {
//       while(*dest++ = *src++)
//        {
//            ;
//        }
//    }
//}

//四次优化，8分，应该也还不是最终优化，应该吧。。。
//#include <assert.h>  //断言
//void my_strcpy(char* dest,char* src)
//{
//    assert(dest != NULL);  //如果结果判断为0，就会报错
//    assert(src != NULL);
//    while(*dest++ = *src++)
//    {
//        ;
//    }
//}

//五次优化，9分
//#include <assert.h>
//void my_strcpy(char* dest,const char* src)  //这里用const修饰*src意味着不能改变*src的值
//{
//    assert(*dest != NULL);
//    assert(*src != NULL);
//    while(*dest++ = *src++)  //所以这里*src只能放在右边，否则报错
//    {
//        ;
//    }
//}

//六次优化，10分
#include <assert.h>  //断言
char* my_strcpy(char* dest,const char* src)
{
    char* ret = dest;  //最后return ret,不要return dest，因为while循环*dest++已经+到靠后的地址去了
    assert(*dest != NULL);  //不等于返回1，等于返回0报错
    assert(*src != NULL);
    while(*dest++ = *src++)  //把src指向空间中的内容拷贝到dest中去，包含'\0'字符
    {
        ;
    }
    return ret;  //返回目的地起始地址
}
int main(void)
{
    char arr1[] = "#############",
         arr2[] = "bit";
     //调用函数，参数arr1和arr2都分别为两个数组的首地址
    printf("%s", my_strcpy(arr1,arr2));  //链式访问
    return 0;
}
