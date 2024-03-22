#include <stdio.h>}

int main() {
    char name[10], team_name[30] ;
    int num ;

    printf("이름을 입력하시오:  "); scanf("%s", name);
    printf("학번을 입력하시오:  "); scanf("%d", &num);
    printf("팀 이름을 입력하시오 : "); scanf("%s", team_name);

    printf("\n<출력> \n");
    printf("이름 : %s\n", name);
    printf("학번 : %d\n", num);
    printf("팀 이름 : %s\n", team_name);`
    return 0;
}


