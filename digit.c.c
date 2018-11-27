#include <stdio.h>

int main(){
 long long int k, l, q, r, m, n, o, i, j, counter, temp;
counter = 0;
int flag = 0;
 long long int ragam = 0;

scanf("%lld", &k);
//l = k;
    for( i = 1 ; i <= k ;i++ ){
            if (flag){

                break;
            }


            temp = i;
           // q = temp;
            ragam = 0;


            while( temp!= 0){
                temp =temp /10;
                ragam ++;
            }
            temp = i;

            while( ragam >0){
                temp = i;

                for (j = 0; j <ragam-1; j++){
                    temp = i / 10;
                }
                counter++;
                r = temp % 10;

                if (counter == k){
                        flag = 1;
                        printf("%d", r);
                }
                ragam --;

            }

    }
}

