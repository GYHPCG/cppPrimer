#include <stdio.h>

#include <stdlib.h>

#include <time.h>

 

int main(int argc, char **argv)

{

//     srand(time(0));

//     char s[64];

//     int offset = 0;

 

//     for (int i = 0; i < 10; i++)

//     {

//         offset += sprintf(s + offset, "%d, ", rand() % 100);
//         //printf("%d ")
//         printf("%d ",offset);

//     }

 
//    // printf("%d\n",offset);

//    s[offset - 2] = '\n'; // 将最后一个逗号换成换行符。

    
//     printf("\n");
//     printf(s);
//     //printf("\n");
//     int sum = 0;
//     for (int i = 1; i < 10; ++i) {
//         sum += i;
//     }
//     //cout << sum <<endl;
//     //printf("%d\n",sum);

    char s[6];
    int n = snprintf(s,3,"qwertutitio");
    printf("%d\n",n);
    printf(s);
    return 0;

}