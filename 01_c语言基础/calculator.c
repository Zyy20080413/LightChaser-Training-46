#include <stdio.h>

int main()  {
float num1,num2;
char op;

printf("请输入计算式:");
scanf("%f %c %f",&num1,&op,&num2);

if(op == '+') {
printf("%.2f + %.2f = %.2f\n",num1,num2,num1 + num2);
}
else if (op == '-') {
printf("%.2f - %.2f = %.2f\n",num1,num2,num1 - num2);
}
else if (op == '*') {
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    }
else if (op == '/') {
    if (num2 == 0) {
        printf("错误: 除数不能为零。\n");
    } else {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    }
}
else {
    printf("错误: 无效的运算符。\n");
}
return 0;
}