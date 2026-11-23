#include <stdio.h>
void reverse_bits(int *number, int *result)
{
    int remaining = *number;
    int reversed = 0;

    // 2進数の下位ビットから順番に取り出す
    while (remaining > 0) {
        reversed = (reversed << 1) | (remaining & 1);
        remaining >>= 1;
    }

    // 反転したビット列の値をポインタ経由で保存する
    *result = reversed;
}

int main(void)
{
    int input_value;
    int output_value;

    scanf("%d", &input_value);

    // 0以下の場合はNGを表示する
    if (input_value <= 0) {
        printf("NG");
        return 0;
    }

    reverse_bits(&input_value, &output_value);

    printf("%d,%d", input_value, output_value);

    return 0;
}