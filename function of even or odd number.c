//Function to determine even or odd number
#include<stdio.h>
int relation(int num);
int main(){
    int num,result;printf("\n enter the number:");
    scanf("%d",&num);
    result=(num%2==0);
    if(num%2==0){
        printf("\n number is even");
    }
    else{
        printf("\n number is odd");
    }
    return 0;
}
int relation(int num)
{
    int answer;
    answer=num%2==0;
    return answer;
    }