#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 引数がなければエラーで終了
    if (argc == 1)  return -1;

    union {
      float f;
      uint32_t ui;
    } data;

    char *endptr;
    data.f = strtof(argv[1], &endptr);
    // 文字列->浮動小数点数 の変換に失敗した場合、エラーで終了
    if (*endptr != '\0')  return -2;

    // 16進数として出力
    printf("0x%08x", data.ui);

    return 0;
}
