/* �Զ��庯��ʵ��strlen�⺯������ */
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* len)  //�����޸��ַ���
{
    assert(*len != NULL);  //��ָ֤�����Ч��
    int count = 0;
    while(*len != '\0')  //����Ԫ�ز�����48��ʱ�����ѭ��
    {
        count++;        //����
        len++;      //ָ����һ����ַ
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
