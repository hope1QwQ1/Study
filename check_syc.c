/* ���ϵͳ�Ǵ�˴洢����С�˴洢,�ٶ�2015ϵͳ����ʦ������10�� */
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
        printf("С�˴洢\n");
    }
    else
    {
        printf("��˴洢\n");
    }
    return 0;
}
