#include <stdio.h>

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단1
//정수를 입력받아 첫 줄에 입력받은 숫자를 출력하고 음수이면 "minus"라고 출력하는 프로그램을 작성하시오
// int main() {
//     int num = 0;

//     scanf("%d", &num);

//     if(num < 0) {
//         printf("minsu");
//     } else {
//         printf("%d", num);
//     }

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단2
//"몸무게 + 100 - 키"를 비만수치 공식이라고 하자
//키와 몸무게를 입력받아 첫 번째 줄에 비만수치를 입력하고, 비만수치가 0보다 크면 다음 줄에 비만("Obesity")라는 메시지를 출력하시오
// int main() {
//     int weight = 0;
//     int height = 0;
//     int total = 0;

//     printf("키를 입력해주세요: ");
//     scanf("%d", &height);
//     printf("몸무게를 입력해주세요: ");
//     scanf("%d", &weight);

//     total = (weight + 100) - height;

//     if(total > 0) {
//         printf("%d\nObesity", total);
//     } else {
//         printf("%d", total);
//     }

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단3
//나이를 입력받아 20살 이상이면 "adult"라고 출력하고 그렇지 않으면 몇 년후에 성인이 되는지를 "o years later"라는 메시지를 출력하는 프로그램을 작성하시오.
// int main() {
//     int age = 0;
    
//     scanf("%d", &age);
    
//     if(age >= 20) {
//         printf("adult");
//     } else {
//         printf("%d years later", 20-age);
//     }

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단4
//몸무게를 입력받아 체급을 출력하는 프로그램을 작성하시오.
//Flyweight = 50.80kg 이하, Lightweight = 61.23kg 이하, Middleweight = 72.57kg 이하, Cruiserweight = 88.45kg 이하, Heavyweight = 88.45 초과
// int main() {
//     double weight = 0.0;

//     scanf("%lf", &weight);

//     if(weight <= 50.80) {
//         printf("Flyweight");
//     } else if(weight <= 61.23) {
//         printf("Lightweight");
//     } else if(weight <= 72.57) { 
//         printf("Middleweight");
//     } else if(weight <= 88.45) {
//         printf("Cruiserweight");
//     } else {
//         printf("Heavyweight");
//     }

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단5
//두 개의 실수를 입력받아 모두 4.0 이상이면 "A", 모두 3.0 이상이면 "B", 아니면 "C" 라고 출력하는 프로그램을 작성하시오
// int main() {
//     double first_data = 0.0;
//     double second_data = 0.0;

//     scanf("%lf %lf", &first_data, &second_data);

//     if(first_data >= 4.0 && second_data >= 4.0) {
//         printf("A");
//     } else if(first_data >= 3.0 && second_data >= 3.0) {
//         printf("B");
//     } else {
//         printf("C");
//     }

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단6
//남자 = 'M', 여자 = 'F', 18세 이상 성인
//성별과 나이를 입력받아 "MAN"(성인남자), "WOMAN"(성인여자), "BOY"(미성년남자자, "GIRL"(미성년여자)을 구분하여 출력하는 프로그램을 작성하시오
// int main() {
//     char gender;
//     int age = 0;

//     scanf("%c %d", &gender, &age);

//     if (gender == 'M') {
//         if (age >= 18) {
//             printf("MAN");
//         } else {
//             printf("BOY");
//         }
//     } else {
//         if(age >= 18) {
//             printf("WOMAN");
//         } else {
//             printf("GIRL");
//         }
//     }
    
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단7
//대문자를 입력받아 'A'이면 'Excellent", 'B'이면 "Good", 'C이면 "Usually", 'D'이면 "Efort", 'F'이면 "Failure", 그 외 문자이면 "error"라고 출력하는 프로그램을 작성하시오
// int main() {
//     char text;

//     scanf("%c", &text);

//     switch (text)
//     {
//     case 'A':
//         printf("Excellent");
//         break;
//     case 'B': 
//         printf("Good");
//         break;
//     case 'C':
//         printf("Usually");
//         break;
//     case 'D':
//         printf("Efort");
//         break;
//     case 'F':
//         printf("Failure");
//         break;
//     default:
//         printf("error");
//     }

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단8
//4.5 이하의 평점을 입력받아 그 값에 따라 다음과 같이 출력하는 프로그램을 만드시오
// int main() {
//     float score = 0.0;

//     scanf("%f", &score);

//     switch ((int)score) {
//         case 4:
//             printf("scholarship");
//             break;
//         case 3:
//             printf("next semester");
//             break;
//         case 2:
//             printf("seasonal semester");
//         default:
//             printf("retake");
//     }

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------- //
//자가진단9
//3개의 정수를 입력받아 조건연산자를 이용하여 입력받은 수들 중 최소값을 출력하는 프로그램을 작성하시오.
// int main() {
//     int num1, num2, num3;
//     int min = 0;

//     scanf("%d %d %d", &num1, &num2, &num3);
//     min = (num1 < num2) ? num1 : num2;
//     min = (min < num3) ? min : num3;

//     printf("%d", min);

// }