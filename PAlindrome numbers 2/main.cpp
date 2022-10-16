#include <iostream>
#include <stdio.h>

using namespace std;

int IsPalindrome(int n){
    int a=0;
    while(n > 0){
        a = a*10 + n%10;
        n = n/10;
    }
    return a;
}

int main()
{
   int t;
   scanf("%d", &t);
   while(t--){
    int n;
    scanf("%d", &n);
    if(n == IsPalindrome(n))
       {
          printf("YES\n");
       }
    else{
        printf("No\n");
    }

   }
    return 0;
}
