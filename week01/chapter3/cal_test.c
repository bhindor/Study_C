#include <stdio.h>

// --------------------------------------------------------------------------------------------------------------------------------------------- //

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

// --------------------------------------------------------------------------------------------------------------------------------------------- //

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

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//1개의 정수를 입력 받아서 후치증가 연산자를 사용하여 출력한 후, 전치 증가 연산자를 사용하여 출력하는 프로그램을 작성하시오.
// int main() {
//     int data = 0;

//     printf("정수를 입력해주세요: ");
//     scanf("%d", &data);

//     int b = data++;
//     printf("%d\n", b);
//     ++data;
//     printf("%d\n", data);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//두 개의 정수를 입력받아 각각 후치증가 연산자와 전치 감소 연산자를 사용하여 두 수의 곱을 새로운 변수에 저장한 후 각각의 값을 출력하시오.
// int main() {
//     int first_data = 0;
//     int second_data = 0;
//     int total = 0;

//     printf("두 개의 정수를 입력해주세요: ");
//     scanf("%d %d", &first_data, &second_data);
//     total = first_data++ * --second_data;

//     printf("%d %d %d", first_data, second_data, total);
    
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//두 개의 정수를 입력받아 두 정수의 값이 같으면 1, 아니면 0을 출력하시오
// int main() {
//     int first_data = 0;
//     int second_data = 0;

//     printf("두 개의 정수를 입력해주세요: ");
//     scanf("%d %d", &first_data, &second_data);

//     printf("%d", first_data == second_data);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//두 개의 정수를 입력받아서 다음과 같이 4가지 관계 연산자의 결과를 출력하시오.
// void Calculation(int first_data, int second_data);

// int main() {
//     int first_data = 0;
//     int second_data = 0;

//     printf("두 개의 정수를 입력해주세요 : ");
//     scanf("%d %d", &first_data, &second_data);

//     Calculation(first_data, second_data);

//     return 0;
// }

// void Calculation(int first_data, int second_data) {
//     int cal = 0;

//     cal = first_data > second_data;
//     printf("%d > %d --- %d\n", first_data, second_data, cal);
//     cal = first_data < second_data;
//     printf("%d < %d --- %d\n", first_data, second_data, cal);
//     cal = first_data >= second_data;
//     printf("%d >= %d --- %d\n", first_data, second_data, cal);
//     cal = first_data <= second_data;
//     printf("%d <= %d --- %d\n", first_data, second_data, cal);
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//2개의 정수를 입력 받아서 논리곱과 놀리합의 결과를 출력하는 프로그램을 작성하시오
/*논리곱 => && : a도 참이고 b도 참이다 (모두 참이여야 참)
논리합 => || : a가 참이거나 b가 참이다 (둘 중 어느 하나라도 참이면 참)
! : ~가 아니다 (a가 참이면 거짓, 거짓이면 참이 된다)*/
// int main() {
//     int first_data = 0;
//     int second_data = 0;

//     printf("두 개의 정수를 입력해 주세요 : ");
//     scanf("%d %d", &first_data, &second_data);

//     printf("%d %d", first_data && second_data, first_data || second_data);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//3개의 정수를 입력 받아 첫 번째 수가 가장 크면 1, 아니면 0을 출력하고 세 개의 수가 모두 같으면 1, 아니면 0을 출력하는 프로그램을 작성하시오

int LargestNumber(int first_data, int second_data, int third_data); //첫째값이 가장 큰지 비교하는 함수
int CompareNumber(int first_data, int second_data, int third_data); //모두 같은 값인지 비교

int main() {
    int first_data = 0;
    int second_data = 0;
    int third_data = 0;
    int largestNumberResult = 0;
    int compareNumberResult = 0;

    printf("3개의 정수를 입력해 주세요 : ");
    scanf("%d %d %d", &first_data, &second_data, &third_data);

    largestNumberResult = LargestNumber(first_data, second_data, third_data);
    compareNumberResult = CompareNumber(first_data, second_data, third_data);

    printf("%d %d", largestNumberResult, compareNumberResult);

    return 0;
}

int LargestNumber(int first_data, int second_data, int third_data){ 
    if (first_data > second_data && first_data > third_data){
        return 1;
    } else {
        return 0;
    }
}

int CompareNumber(int first_data, int second_data, int third_data) { 
    if (first_data == second_data && first_data == third_data && second_data == third_data) {
        return 1;
    } else {
        return 0;
    }
}

// --------------------------------------------------------------------------------------------------------------------------------------------- //