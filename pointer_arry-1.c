/* ָ�� ָ������ ����ָ�� */

#include <stdio.h>

/*  int main()
{
    const char* p = "abcdefg";  //ʹ��const����*p����Ķ��Ĳ��ˣ���Ϊ����˫��������ǳ������Բ��ܸġ�
    p = "hijklmn";  //ָ����һ���ַ��������ǿ��Եģ����ǲ��ܽ�����
    printf("%s",p);
    return 0��
}   */

/*  int main()
{
        int a = 10,
        b = 20,
        c = 30,
        d = 40;
    int* p_arr[] = {&a,&b,&c,&d};  //ָ�����飬���ָ�룬Ȼ������ָ�������÷��Ƚϵͼ�
    int i = 0,
        len = sizeof(p_arr)/sizeof(p_arr[0]);
    for(i=0; i<len; i++)
    {                                      //&p_arr[i] %p��ӡ����ָ������p_arr�ĵ�ַ��
        printf("p_arr[%d] = %p = %d = %p\n",i,&p_arr[i],*(p_arr[i]),p_arr[i]);
    }                                      //��p_arr[i] %p��ӡ����p_arr����Ԫ�صĵ�ַ����Ԫ�ر������ǵ�ַ���Բ���&ȡ��ַ
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
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};  //ָ��һά�����ָ��
    int* p = arr;
    int i = 0;
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);   // arr[i] == p[i] == *(p+i) == *(arr+i)
        printf("%d ",p[i]);     // ����arr������Ԫ�ص�ַ��+1��ʾ����һ��Ԫ��
        printf("%d ",*(p+i));   // ͬ������ָ��pָ��ľ���arr����arr������Ԫ�ص�ַ
        printf("%d ",*(arr+i)); // p+1Ҳ��������(int)4���ֽڼ�һ��Ԫ��
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
