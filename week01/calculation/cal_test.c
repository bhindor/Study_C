#include <stdio.h>

//3개의 정수를 입력 받아서 합계와 평균을 출력
// int main() {
//     int first_data = 0;
//     int second_data = 0;
//     int third_data = 0;
//     int total = 0;

//     printf("3개의 정수를 입력해주세요: ");
//     scanf("%d %d %d", &first_data, &second_data, &third_data); //정수 값 입력

//     total = first_data + second_data + third_data; // 합 계산
//     printf("sum : %d\n", total);
//     printf("avg : %d\n", total/3);

//     return 0;
// }

// 정수 2개를 입력받아서 첫 번째 수에는 100을 증가시켜 저장하고,
// 두번째 수는 10으로 나눈 나머지 값을 저장한 후, 두 수를 차례로 출력하시오
// int main() {
//     int first_data = 0;
//     int second_data = 0;

//     printf("2개의 정수를 입력해주세요: ");
//     scanf("%d %d", &first_data, &second_data);

//     first_data += 100;
//     second_data %= 10;

//     printf("%d %d\n", first_data, second_data);

//     return 0;
// }

//1개의 정수를 입력 받아서 후치증가 연산자를 사용하여 출력한 후, 전치 증가 연산자를 사용하여 출력하는 프로그램을 작성하시오.
int main() {
    int data = 0;

    printf("정수를 입력해주세요: ");
    scanf("%d", &data);

    int b = data++;
    printf("%d\n", b);
    ++data;
    printf("%d\n", data);

    return 0;
}