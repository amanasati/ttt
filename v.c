#include<stdio.h>
#include<math.h>
int is prime(int num) {
    if (num<=1){
        return 0; 
    }
    for(int i=2; i*i <=sum; i++){
        if (num% i==0){
            return 0;
        }
    }
    return 1;}
    int main(){
        int n;
        printf("Enter the number of prime number you want to find;");
        scanf("%d",&n);
        int count=0;
        int num =2; 11 starting from 2 as first prime number 
        long long sum=0;
        while (count<n){
            if(isprime(num)){

                sum+=num;
                count+++;}
                num++,}
            printf("The sum of the first %d prime number is : % 11d\n" , n, sum);
            return 0;
    }
