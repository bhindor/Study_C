#include <stdio.h>

// int -> 정수 저장, char -> 문자 저장

//정수형 변수 선언 -> -100 출력
// int main() {
//     int data = -100;

//     printf("%d\n", data);

//     return 0;
// }

//두 변수 선언 -> 10과 20 대입 후 순서 바꾸어 출력
// int main() { 
//     int a = 10;
//     int b = 20;

//     printf("%d %d\n", b, a);

//     return 0;
// }

//두 변수 선언 -> 10, 20 대입 후 합 출력 -> 30, 40으로 변경하여 다시 합 출력
// int main() {
//     int a = 10;
//     int b = 20;

//     printf("%d + %d = %d\n", a, b, a+b);

//     a = 30;
//     b = 40;

//     printf("%d + %d = %d\n", a, b, a+b);

//     return 0;
// }

//추의 무게 = 49, 중력의 비율 = 0.2683 곱셈 출력
// int main() {
//     int weight = 49;
//     double gravity = 0.2683;

//     printf("%d * %f = %f", weight, gravity, weight * gravity);

//     return 0;
// }

//1야드(yd)는 91.44cm이고 1인치(in)는 2.54cm이다
//2.1야드와 10.5인치를 각각 cm로 변환하여 소수 첫째자리까지 출력
int main() { 
    double yd = 91.44;
    double in = 2.54;
    double yd_data = 0;
    double in_data = 0;

    scanf("%lf", &yd_data);
    scanf("%lf", &in_data);

    printf("%fyd = %.1fcm\n", yd_data, yd * yd_data);
    printf("%fin = %.1fcm\n", in_data, in * in_data);

    return 0;
}
