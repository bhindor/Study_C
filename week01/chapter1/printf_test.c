#include <stdio.h>

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단1
//다음과 같이 출력되는 프로그램을 작성하라

// int main() {
//     printf("Fun Programming!");

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단2
//위의 소스와 같은 방식으로 다음과 같이 출력되는 프로그램을 작성하라

// int main() {
//     printf("Programming! "); // \n -> Enter 역할을 넣어주지 않으면 줄바꿈이 일어나지 않는다
//     printf("It's fun");

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단3 //printf 기초
/*int main() {
    printf("My name is Hong Gil Dong.\n");
    printf("I am 13 years old.");

    return 0;
}*/

/*
    \n -> 행바꿈(Enter)
    \t -> 탭(Tap)
    \\ -> 화면에 '\'를 표시 -> 궁금하면 printf("\\"); 로 확인해보자
*/

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단4 
/*int main() {
    printf("(@) (@)\n");
    printf("(=^.^=)\n");
    printf("(-m-m-)\n");

    return 0;
}*/

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단5 //printf %d-정수, %f-실수, %c-문자, %s-문자열
/*int main() {
    printf("%s \n", "I can program well.");
    printf("%s \n", "Dreams come true.");

    return 0;
}*/

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단6 //문자열, 정수, 실수 출력
// int main() { 
//     printf("%s\n", "My Height"); //문자열
//     printf("%d\n", 170); //정수
//     printf("%s\n", "My weight"); //문자열
//     printf("%f\n", 68.6); //실수

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //

//자가진단7 //정수 계산
// int main() {
//     printf("5 Dan\n");
//     printf("%d * %d = %d\n", 5, 2, 5 * 2); //계산식의 위치는 아무곳이나 상관이없다 *하단 예시 코드 참조
//     return 0;
// }

//예시 코드
/* int main() {
    int mul = 0; 
    (변수명은 조금 귀찮더라도 a,b,c,d가 아닌 관련된 용어로 만들어주면 나중에 본격적인 개발을 할때 코드읽기가 편하다
    따라서 코딩을 시작하는 지금부터 상황에 맞는 변수명을 지정하도록 노력해보자)
    printf("5 Dan\n");
    mul = 5 * 2;
    printf("%d * %d = %d", 5, 2, mul);

    return 0;
} */
// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단8
//다음과 같이 출력되는 프로그램을 작성하라(각 요소들은 공간을 10칸씩 확보하여 오른쪽으로 정렬하여 출력)
int main() {
    printf("%10s%10s%10s\n", "item", "count", "price");
    printf("%10s%10d%10d\n", "item", 20, 100);
    printf("%10s%10d%10d\n", "item", 5, 95);
    printf("%10s%10d%10d\n", "item", 110, 97);

    return 0;
}