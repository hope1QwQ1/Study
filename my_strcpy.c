/* ʵ�ֿ⺯��strcpy���� */
#include <stdio.h>

//�˳�������ʮ��ֻ������
//void my_strcpy(char* dest,char* src)  //destΪĿ�ĵأ�srcΪԴͷ
//{
//    while(*src != '\0')  //���ѭ������������ζ��\0�����ᱻ����
//    {
//        *dest = *src;  //��ʱ��ָ����Ԫ�أ�Ȼ�������
//        src++;         //ָ����һ��Ԫ��
//        dest++;
//    }
//    *dest = *src;      //������������һ��Ԫ�أ��ٰ�\0�ŵ�Ŀ�ĵص����һ��Ԫ��λ��
//}

////һ��С�Ż�,����������ֻ�Ǽ��������ж���
//void my_strcpy(char* dest,char* src)
//{
//    while(*src != '\0')
//    {
//        *dest++ = *src++;  //�ȸ�ֵ��++������û����
//    }
//    *dest = *src;
//}

//�����Ż���Ҳ�ŵ�7��
//void my_strcpy(char* dest,char* src)
//{
//    while(*dest++ = *src++)  //����ͬʱҲ��\0��ֵ��ȥ�ˣ����Ҹպ�\0��0,ѭ��Ҳ�ͽ�����
//    {
//        ;
//    }
//}

//���δ��Ż����������Ҳ��7�ֶ�һ����
//void my_strcpy(char* dest,char* src)  //��һ������һ��NULLҲ����ζ�ſ�ָ�룬ָ�����0
//{
//    if(dest!=NULL && src!=NULL)   //�Ӹ��ж����������ڳ���ֱ�ӹҵ�
//    {
//       while(*dest++ = *src++)
//        {
//            ;
//        }
//    }
//}

//�Ĵ��Ż���8�֣�Ӧ��Ҳ�����������Ż���Ӧ�ðɡ�����
//#include <assert.h>  //����
//void my_strcpy(char* dest,char* src)
//{
//    assert(dest != NULL);  //�������ж�Ϊ0���ͻᱨ��
//    assert(src != NULL);
//    while(*dest++ = *src++)
//    {
//        ;
//    }
//}

//����Ż���9��
//#include <assert.h>
//void my_strcpy(char* dest,const char* src)  //������const����*src��ζ�Ų��ܸı�*src��ֵ
//{
//    assert(*dest != NULL);
//    assert(*src != NULL);
//    while(*dest++ = *src++)  //��������*srcֻ�ܷ����ұߣ����򱨴�
//    {
//        ;
//    }
//}

//�����Ż���10��
#include <assert.h>  //����
char* my_strcpy(char* dest,const char* src)
{
    char* ret = dest;  //���return ret,��Ҫreturn dest����Ϊwhileѭ��*dest++�Ѿ�+������ĵ�ַȥ��
    assert(*dest != NULL);  //�����ڷ���1�����ڷ���0����
    assert(*src != NULL);
    while(*dest++ = *src++)  //��srcָ��ռ��е����ݿ�����dest��ȥ������'\0'�ַ�
    {
        ;
    }
    return ret;  //����Ŀ�ĵ���ʼ��ַ
}
int main(void)
{
    char arr1[] = "#############",
         arr2[] = "bit";
     //���ú���������arr1��arr2���ֱ�Ϊ����������׵�ַ
    printf("%s", my_strcpy(arr1,arr2));  //��ʽ����
    return 0;
}
