#include<stdio.h>

int main(){
    int a=4;
    printf("%d\n",++a);//Here the assigned value is incremented to 5 by using perfix-increment and then the value a is stated as 5 only.
    a++;//Here the incremented value is assigned for the post-increment which becomes 6.
    printf("a = % d\n",a);
    printf("%d\n",--a);// Here the value which is incremented is assigned for perfix-decrement. which becomes 5 and stated as 5 only for furthur process.
    a--;//Once again here the value is decreased by usng the post-decrement which gives the value as 4.:-)
    printf("a=%d",a--);/* If we use the prefix method for POST-decre&incre-ment the value becomes the same value as the we got before steps of post____&___nt's
    .i.e, the value is 1st implemented and excuted in the next step, which fetchs the value here every time*/
    return 0;
}