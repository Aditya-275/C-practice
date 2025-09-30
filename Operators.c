#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers seprated by space like a b: "); 
    scanf("%d %d",&a,&b);
    // Arithmetic Operations
    printf("We are going to perform arithmetic operations on %d and %d\n",a,b);
    printf("Addition (+): %d\n",a+b);
    printf("Subtraction(-): %d\n",a-b);
    printf("Multiplication(*): %d\n",a*b);
    printf("Division(/): %d\n",a/b);
    printf("Modulus(%%): %d\n",a%b);
    printf("pre-Increment(++a): %d\n",++a);
    a--; // To bring a to its original value
    printf("pre-Decrement(--b): %d\n",--b);
    b++; // To bring b to its original value
    printf("post-Increment(a++): %d\n",a++);
    a--; // To bring a to its original value
    printf("post-Decrement(b--): %d\n\n\n\n",b--);
    b++; // To bring b to its original value
    //Bitwise Operations
    printf("We are going to perform Bitwise operations on %d and %d\n",a,b);
    printf("Bitwise AND(&): %d\n",a&b);
    printf("Bitwise OR(|): %d\n",a|b);
    printf("Bitwise NOT(~): %d\n",~a);// It is only for one number
    printf("Bitwise XOR(^): %d\n",a^b);
    printf("Left Shift(<<): %d\n",a<<1);
    printf("Right Shift(>>): %d\n\n\n\n",a>>1);
    //Relational Operations
    printf("We are going to perform Relational operations on %d and %d\n",a,b);
    printf("Equal to(==): %d\n",a==b);  
    printf("Not Equal to(!=): %d\n",a!=b);
    printf("Greater than(>): %d\n",a>b);
    printf("Less than(<): %d\n",a<b);
    printf("Greater than or Equal to(>=): %d\n",a>=b);
    printf("Less than or Equal to(<=): %d\n\n\n\n",a<=b);
    //Logical Operations
    printf("We are going to perform Logical operations on %d and %d\n",a,b);
    printf("Logical AND(&&): %d\n",a&&b);
    printf("Logical OR(||): %d\n",a||b);
    printf("Logical NOT(!): %d\n\n\n\n",!a);
    return 0;
}
