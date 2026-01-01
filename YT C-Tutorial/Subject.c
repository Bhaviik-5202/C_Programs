#include <stdio.h>

int SubjectPer(int sci, int math, int chem);

int main() {

    int sci, math, chem;
    printf("Enter Science Marks :  ");
    scanf("%d", &sci);

    printf("Enter Maths Marks :  ");
    scanf("%d", &math);

    printf("Enter Chemistry Marks :  ");
    scanf("%d", &chem);


    int pertange = SubjectPer(sci, math, chem);

    printf("YYour Pertange : %d\n", pertange);

    return 0;

}


int SubjectPer(int sci, int math, int chem) {
    int pertange = (sci + math + chem) /3;

    return pertange;

}