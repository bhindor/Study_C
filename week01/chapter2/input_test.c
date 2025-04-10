#include <stdio.h>

// int -> 정수 저장, char -> 문자 저장

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단1
//정수형 변수를 선언하고 -100을 대입하여 출력하는 프로그램을 작성하라

// int main() {
//     int data = -100;
//     printf("%d\n", data);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단2
//정수형 변수 2개를 선언하여 -1과 100을 대입한 후 아래와 같이 출력하는 프로그램을 작성하라
// int main() { 
//     int first_data = -1;
//     int second_data = 100;

//     printf("%d \n %d", first_data, second_data);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단3
//두 개의 정수형 변수를 선언하고 값을 대입하여 아래와 같이 출력되는 프로그램을 작성하라
int main() {
    int first_data = 55;
    int second_data = 10;

    printf("%d - %d = %d\n", first_data, second_data, first_data-second_data);

    first_data = 2008;
    second_data = 1999;
    printf("%d - %d = %d\n", first_data, second_data, first_data-second_data);

    return 0;
}

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단4
//다음 두 값을 변수에 저장하고 곱셈 계산식을 출력하는 프로그램을 작성하라
//추의 무게 = 49, 중력의 비율 = 0.2683 곱셈 출력
// int main() {
//     int weight = 49;
//     double gravity = 0.2683;

//     printf("%d * %f = %f", weight, gravity, weight * gravity);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단5
//1야드(yd)는 91.44cm이고 1인치(in)는 2.54cm이다
//2.1야드와 10.5인치를 각각 cm로 변환하여 소수 첫째자리까지 출력
// int main() { 
//     double yd = 91.44;
//     double in = 2.54;
//     double yd_data = 0; //scanf를 사용하지않고 yd = 2.1, in = 26.7로 대입해서 진행하면된다
//     double in_data = 0; //다음문제에 scanf 사용법이 나오니 그때부터 사용하면된다

//     scanf("%lf", &yd_data);
//     scanf("%lf", &in_data);

//     printf("%.1fyd = %.1fcm\n", yd_data, yd * yd_data);
//     printf("%.1fin = %.1fcm\n", in_data, in * in_data);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단6
//키를 입력받아 출력하는 프로그램을 작성하라
// int main() {
//     int height = 0;
    
//     printf("height = ");
//     scanf("%d", &height);

//     printf("Your height is %dcm.", height);
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단7
//두 개의 정수를 입력 받아 곱과 몫을 출력하시오
// int main() {
//     int first_data = 0;
//     int second_data = 0;

//     scanf("%d %d", &first_data, &second_data);
//     printf("%d * %d = %d\n", first_data, second_data, first_data * second_data);
//     printf("%d / %d = %d\n", first_data, second_data, first_data / second_data);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단8
//실수 2개와 한 개의 문자를 입력 받아 출력하되 실수는 소수 셋째자리에서 반올림하여 소수 둘째자리까지 출력하는 프로그램을 작성하시오.
// int main() {
//     double first_data = 0.0;
//     double second_data = 0.0;
//     char data;

//     scanf("%lf", &first_data);
//     scanf("%lf", &second_data);
//     getchar(); //getchar 없이 코드를 돌려보고 getchar()의 역할을 한번쯤 찾아보면 좋을것같다
//     scanf("%c", &data);

//     printf("%.2f\n%.2f\n%c", first_data, second_data, data);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단9
//세 개의 실수를 입력 받아 소수 4자리에서 반올림하여 소수 3자리까지 출력하는 프로그램을 작성하시오.
// int main() {
//     double x, y, z;

//     scanf("%lf", &x);
//     scanf("%lf", &y);
//     scanf("%lf", &z);

//     printf("%.3f\n%.3f\n%.3f", x, y, z);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
