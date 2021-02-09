/* 指针 指针数组 数组指针 */

#include <stdio.h>

/*  int main()
{
    const char* p = "abcdefg";  //使用const修饰*p，想改都改不了，因为本身双引号里的是常量所以不能改。
    p = "hijklmn";  //指向另一个字符串常量是可以的，但是不能解引用
    printf("%s",p);
    return 0；
}   */

/*  int main()
{
        int a = 10,
        b = 20,
        c = 30,
        d = 40;
    int* p_arr[] = {&a,&b,&c,&d};  //指针数组，存放指针，然而这种指针数组用法比较低级
    int i = 0,
        len = sizeof(p_arr)/sizeof(p_arr[0]);
    for(i=0; i<len; i++)
    {                                      //&p_arr[i] %p打印的是指针数组p_arr的地址，
        printf("p_arr[%d] = %p = %d = %p\n",i,&p_arr[i],*(p_arr[i]),p_arr[i]);
    }                                      //而p_arr[i] %p打印的是p_arr数组元素的地址，而元素本来就是地址所以不用&取地址
    return 0;
}   */

/*  int main()
{
    int arr1[] = {1,2,3,4,5,6},
        arr2[] = {2,3,4,5,6,7},
        arr3[] = {3,4,5,6,7,8},
        arr4[] = {4,5,6,7,8,9};
    int* p_arr[] = {arr1,arr2,arr3,arr4};
    int i = 0,
        p_arr_len = sizeof(p_arr)/sizeof(p_arr[0]),
        arr_len = sizeof(arr1)/sizeof(arr1[0]);
    for(i=0; i<p_arr_len; i++)
    {
        int j = 0;
        printf("p_arr[%d] -> arr%d : \n",i,i+1);
        for(j=0; j<arr_len; j++)
        {
            printf("arr[%d] = %d\n",j,*(p_arr[i]+j3));
        }
        printf("\n");
    }
    return 0;
}   */
/*  int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};  //指向一维数组的指针
    int* p = arr;
    int i = 0;
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);   // arr[i] == p[i] == *(p+i) == *(arr+i)
        printf("%d ",p[i]);     // 其中arr代表首元素地址，+1表示跳过一个元素
        printf("%d ",*(p+i));   // 同样道理，指针p指向的就是arr，而arr就是首元素地址
        printf("%d ",*(arr+i)); // p+1也代表跳过(int)4个字节即一个元素
    }
    return 0;
}   */
/*  void print(int (*p)[5],int x,int y)
{
    int i = 0;
    for(i=0; i<x; i++)
    {
        int j = 0;
        for(j=0; j<y; j++)
        {
//          printf("%d ",p[i][j]);
//          printf("%d ",*(*(p+i)+j));
//          printf("%d ",(*(p+i))[j]);
            printf("%d ",*(p[i])+j);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};

    print(arr,3,5);

    return 0;
}   */
