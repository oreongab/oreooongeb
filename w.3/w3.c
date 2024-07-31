// #include <stdio.h>

// int main()
// {
//     while(1)
//     {
//         printf("i love u")
//     }

// }

// #include<stdio.h>

// int main(){
// int n;
//     while(1)
//     {
//         printf("Enter Number:");
//         scanf("%d",&n);
//         if(n>0)
//         {
//             continue;
//         }
//         else
//         {
//             break;
//         }
//     }

// }

// #include<stdio.h>
// int main(){
//     int a;

//         scanf("%d",&a);
//         for(int i=1;i<=12;i++)
//         {
//             printf("%d * %d = %d\n",a,i,a*i);
//         }

// }

// #include<stdio.h>
// int main(){
//     int a=0;
//     int b=1;
//     int c;

//     for(int i = 0 ; i<10 ; i++)
//     {
//         printf("%d ",a);
//         c=a+b;
//         a=b;
//         b=c;

//     }
// }

// #include<stdio.h>
// int main(){
//     int i = 10;
//     while (i>0)
//     {
//         printf("%d ",i);
//         i=i-1 ;

//     }

// }

// #include<stdio.h>
// int main() {
//     int i = 1;
//     int a ;
//     int b = 0;
//     while (i<=10)
//     {
//         scanf("%d",&a);
//         b=b+a;

//         if(a>0)
//         {
//             i++;
//             continue;
//         }
//         else{

//             printf("%d",b);
//             break;
//         }
//         if(i+1==10)
//         {
//             printf("%d",b);
//         }

//     }

// }

// #include<stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     int sum=0;
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//         sum+=arr[i];
//     }
//     printf("Sum of entered numbers: %d\n",sum);
//     printf("Numbers in array:");
//    for(i=0;i<5;i++)
//     {
//        printf(" %d",arr[i]);
//     }
// return 0;

// }

// #include<stdio.h>

// int main(){
//     int arr[10],i,j,k,temp;
//     for(i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//         for(i=0;i<10;i++){
//             for(j=0;j<10;j++){
//                 if(arr[j]<arr[j+1])
//                 {
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1] = temp;

//                 }

//             }
//         }

//     for(k=0;k<10;k++){

//         printf("%d ",arr[k]);

//     }

// }

// #include<stdio.h>
// int main(){
//     int arr[10]={50,30,80,10,40,90,20,70,60,100},search,i,found=0,index;
//     scanf("%d",&search);
//         for(i=0;i<10;i++){
//             if(search==arr[i]){
//                 found=1;
//                 index=i;

//             }
//         }
//     if(found==1 ){
//          printf("Value %d found at index %d  ",search,index);
//      }
//     if(found==0){
//         printf("Value %d not found in the array",search);
//     }

//      return 0 ;
// }

#include <stdio.h>
int main()
{

    float area, width, height, base, high, radius;
    int type;

    printf("1. Rectangle \n");
    printf("2. Triangle \n");
    printf("3. Circle \n");
    printf("Enter your choice: ");
    scanf("%d", &type);

    if (type == 1)
    {
        printf("Enter the width: ");
        scanf("%f", &width);
        printf("Enter the height: ");
        scanf("%f,", &height);
        if (width < 0 || height < 0)
        {
            printf("The area of the rectangle is: Error");
        }
        area = width * height;
        printf("The area of the Rectangle is:%.2f", area);
    }

    if (type == 2)
    {
        printf("Enter the base: ");
        scanf("%f", &base);
        printf("Enter the high: ");
        scanf("%f", &high);
        if (base < 0 || high < 0)
        {
            printf("The area of the rectangle is: Error");
        }
        area = 0.5 * base * high;
        printf("The area of the triangle is:%.2f", area);
    }

    if (type == 3)
    {
        printf("Enter the radius: ");
        scanf("%f", &radius);
        if (radius < 0)
        {
            printf("The area of the rectangle is: Error");
        }
        area = 3.14 * radius * radius;
        printf("The area of the circle is:%.2f", area);
    }

    else
    {
        printf("Invalid choice");
    }
}