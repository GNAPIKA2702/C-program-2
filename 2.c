 #include<stdio.h>
 int main()
 {
   int num, rem, rev,org;
   printf("Enter the number:");
   scanf("%d", &num);
   org=num;
   for (rev=0; num!=0; num= num/10)
    { rem= num%10;
      rev= rev*10+rem;
    }
   if (org==rev)
     printf("given number is palindrome");   
   else
     printf("given number is not a palindrome");
     return 0;
 }