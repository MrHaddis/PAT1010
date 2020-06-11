#include<stdio.h>

int main() {
    //定义x 和n；
    //定义index
    //这里我原本是想用 getchar来实现，但是题目没有给出输入最长大小，
    //数组就没法设定大小，就比较麻烦了。
    //所以用scanf获取输入
    int x = 0, n = 0, index = 0;
    while (scanf("%d %d", &x, &n)) {
        if (n == 0) {
            //如果第一项为0多项 则要输出0 0
            if (index == 0) {
                printf("0 0");
            }
            return 0;
        } else if (n != 0) {
            if (index == 0) {
                printf("%d %d", x * n, n - 1);
            } else {
                printf(" %d %d", x * n, n - 1);
            }
        }
        //循环一次就可以不用管index的值了
        if (index == 0) {
            index = 1;
        }
        //为了避免运行超时  每次循环完时 给x n重新赋值
        x = n = 0;
    }
    return 0;
}
