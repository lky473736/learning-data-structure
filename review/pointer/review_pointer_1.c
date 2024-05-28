// 어드레스와 포인터 
// 복습 1. 포인터의 포인터 변수

#include <stdio.h>

int main() {
    int a, *p, **pp;
    
    a = 1;
    p = &a; // p는 정수형 변수 a의 주소값을 가지고 있다
    pp = &p; // pp는 정수형 포인터 변수 p의 주소값을 가지고 있다
    
    // a <- p <- pp 
    
    printf ("%d %d %d\n", a, *p, **pp);
    
    return 0;
}

/*
    **pp와 *p를 구분하여야 한다. 
    만약 아래와 같은 상황이면 어떤 결과가 나올 지 생각해보자.

    main ...
    int *p, **p, a = 10;
    p = &a;
    pp = &p;

    이러면 포인터 변수 p엔 일반 변수 a의 주소가 들어가였고, 포인터의 포인터 변수 pp엔 포인터 변수 p의 주소가 들어갔다.
    만약 pp를 참조한다면 p가 나올 것이고, p를 참조한다면 a가 나올 것이다.
    따라서 pp를 참조하여 a가 나오게 하기 위해선 **pp와 같은 중복 참조가 필요하다.

    #include <stdio.h>

    int main()
    {
        int *p, **pp, a = 10;
        p = &a;
        pp = &p;
        
        printf ("%d %d %d | %p %p %p", a, *p, **pp, &a, p, *pp);
    }
*/