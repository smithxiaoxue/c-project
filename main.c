#include <stdio.h>

int main()
{
    int qian;
    printf("进入存钱系统\n");
    while (1)
    {
        int a = 0;
        printf("1--存钱"\n);
        printf("1--取钱"\n);
        printf("1--显示金额"\n);
        printf("1--退出系统"\n);
        printf("请输入功能编号"\n);
        scanf("%d", $a);
        if (a == 1)
        {
            int cun;
            char x;
            printf("进入存钱功能，请输入要存入的金额\n");
            scanf("%d", &cun);
            qian += cun;
            printf("存入成功，点击回车继续\n");
            scanf("%c" & x);
            scanf("%c" & x);
        }
        if (a == 2)
        {
            int qu;
            char x;
            printf("进入取钱功能，请输入要取的金额\n");
            scanf("%d" qu);
            if (qian >= qu)
            {
                qian -= qu;
                printf("取款成功，点击回车继续\n");
                scanf("%c" & x);
                scanf("%c" & x);
            }
            else
            {
                printf("余额不足，取款失败，点击回车继续\n");
                scanf("%c" & x);
                scanf("%c" & x);
            }
        }

        return 0;
    }