/* ��ʶ����ָ�� */
#include <stdio.h>
int Add(int x,int y)
{
    return x+y;
}
int main()
{
    int a = 10,
        b = 20;
    int (*p_fun)(int,int) = &Add;  //ʡ��&Ҳ��һ���ģ����������ƣ���Ȼ������û����Ԫ��֮˵
    printf("%d\n",Add(a,b));
    printf("%d",(*p_fun)(2,6));  //����ָ�����������������Ȼ��Ϊ�Ǹ�����������û������erroe��
    return 0;
}
