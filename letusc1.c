// #include<stdio.h>
// #include<math.h>
//  int main(){
    // int a=3,b=2,x=5,y=4;

    // printf("%d",5*b*b*x-3*a*y*y-8*b*b*x+10*a*y);

    // int a=4,y=1,c=3;
    // int res=4*a*y/c-a*y/c;
    // printf("%d",res);


    // float a=2.2,b=0.0,c=4.1,y=3.0;
    // float s=c+a*y*y/b;
    // printf("%f",s);

    // float x=3.5;
    // float R=x*x+2*x+(1/2)*x*x+x+1;//1/2 ==0 here
    // printf("%f",R);

    // printf("%d\n",10/5/2/1);
    // printf("%d\n",3/2+5*4/3);
    // printf("%d\n",2-3+5*2/8%3);
    // printf("%d\n",5%3/8*3+4);
    // printf("%d\n",-3%-8/2+7);
    // -3%-8=-3
    // -3/2=-1
    // -1+7=6
    // int i=2,j=3,k,l;
    // float a,b;
    // k=i/j*j;
    // l=j/i*i;
    // a=i/j*j;
    // b=j/i*i;
    // printf("%d %d %f %f\n",k,l,a,b);

    // int a,b,c,d;
    //  a=2%5;
    //  b=-2%5;
    //  c=2%-5;
    //  d=-2%-5;
    //  printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);

    // float a=5,b=2;// two float values can not work with %(modulo) operator
    // int c,d;
    // c=a % b;
    // d=a/2;
    // printf("%d\n",d);
    // // output: error
    
    // printf("nn \n\n nn\n");
    // printf("nn /n/n nn /n");
    // printf("\n%d\n",22/7*5/3);
    // printf("\n%d\n",-7%2-8);
    // printf("\n%f\n",2/7);
    // printf("\n%f\n",2.0/7);
    // printf("\n%f\n",2/7.0);
    // printf("\"\"hello""\"\"\n");//prints "hello"
    // printf("\"hello""\"\n");
    // printf("\"""\"hello\"""\"hello\"""\"hello\"""\"");





    // double x, y, r, theta;
    // printf("Enter the Cartesian coordinates (x,y): ");
    // scanf("%lf %lf", &x, &y);
    // r = sqrt(x*x + y*y);
    // theta = atan2(y, x) * 180 / M_PI;
    // printf("The polar coordinates are: (r,theta) = (%lf,%lf degrees)\n", r, theta);
    
//   int c,d;
//   printf("enter the value of c and d");
//   scanf("%d %d",&c,&d);

//   c=c+d;//3+4 =7
//   d=c-d;//d=7-4=3
//   c=c-d;//c=7-3=4

//   printf("value of c=%d and value of d=%d",c,d);
     
    //  float l1,l2,g1,g2;
    //  printf("enter values of latitude and longitude");
    //  scanf("%f %f %f %f",&l1,&l2,&g1,&g2);

    //  l1=l1*(180/M_PI);
    //  l2=l2*(180/M_PI);
    //  g1=g1*(180/M_PI);
    //  g2=g2*(180/M_PI);

    //  float D=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));

    //  printf("distance in nautical miles:%f",D);

    //  int a=300,b=0,c;
    //  if(a>=400){
    //     b=300;
    //  }
    //  c=200;
    //  printf("%d %d\n",b,c);

    //  int x=10,y=20;
    //  if(x==y){
    //     printf("%d %d\n",x,y);
    //  }

    //  int x=3;
    //  float y=3.0;
    //  if(x==y){
    //     printf("x and y are equal\n");

    //  }
    //  else{
    //     printf("x and y are not equal");
    //  }
     
    // int x=3,y,z;
    // y=x=10;
    // z=x<10;
    // printf("x=%d y=%d z=%d\n",x,y,z);
     

    //  int i=65;
    //  char j='A';
    //  if(i==j){
    //     printf("C IS WOW\n");
    //  }
    //  else{
    //     printf("C is headache\n");
    //  }


//    float a=12.25,b=12.52;
//    if(a==b){
//     printf("a and b are equal\n");
//    }


// if('X'<'x'){
//     printf("ascii value of X is smaller than that of x\n");
// }

// int x=10;
// if(x>=2){
//     printf("%d\n",x);
// }

    //  if(-25){
    //     printf("g");
    //  }
    //   if(3.14){
    //       printf("g");
    // }
    // if(a>=b){
    //       printf("g");
    // }
    // int n;
    // printf("enter five digit number\n");
    // scanf("%d",&n);
    // int rem;
    // int sum=0;
    // int temp=n;
    // if (temp< 10000 || temp> 99999) {
    //     printf("Invalid input!\n");
    //     return 0;
    // }
    // while (temp>0)
    // {   
    //     rem=temp%10;
    //     sum=sum*10+rem;
    //     temp=temp/10;
    //     // printf("%d\n",sum);
    //     /* code */
    // }
    // printf("the reverse of the number is:%d\n",sum);

    // if(sum==n){
    //     printf("your number is palindrome number also\n");
    // }
    // return 0;

    // int Ram,Shyam,Ajay;

    // printf("enter the ages of all three\n");
    // int reading=scanf("%d %d %d",&Ram,&Shyam,&Ajay);
    // printf("no of values read by compiler is:%d\n",reading);
  

    // int val=(((Ram>Shyam)?Shyam:Ram)<Ajay)?(Ram>Shyam)?Shyam:Ram:Ajay;
    // printf("the youngest age value is:%d",val);

   

//     int a;
//     int b;
//     int c;
//     int d;

//     printf("enter values of a,b,c and d\n");
//     scanf("%d %d %d %d",&a,&b,&c,&d);

//     // int val1=(a>b)?a:b;
//     //     val2=(val1>c)?val1:c;
//     //     val3=(val2>d)?val2:d;

//         int val=(((a>b)?a:b)>c)?(a>b)?a:b:c>d?((a>b)?a:b>c)?(a>b)?a:b:c:d;
//    printf("the greatest number is:%d",val);
//    return 0;
// }

// int collinear(int x1, int y1, int x2, int y2, int x3, int y3) {
//     // Calculate the slopes of the lines connecting the three points
//     float slope1 = (x2-x1 == 0) ? INFINITY : (float)(y2-y1)/(x2-x1);
//     float slope2 = (x3-x2 == 0) ? INFINITY : (float)(y3-y2)/(x3-x2);
    
//     // Check if the slopes are equal (or both infinite)
//     return slope1 == slope2;
// }

// int main() {
//     int x1, y1, x2, y2, x3, y3;
    
//     printf("Enter the x and y coordinates of three points:\n");
//     scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    
//     if (collinear(x1, y1, x2, y2, x3, y3)) {
//         printf("The three points are collinear.\n");
//     } else {
//         printf("The three points are not collinear.\n");
//     }
    // return 0;
// }

// #include <stdio.h>

// int main() {
//     int x, y;
//     printf("Enter the coordinates of the point (x, y): ");
//     scanf("%d %d", &x, &y);

//     if (x == 0 && y == 0) {
//         printf("The point (%d, %d) is on the origin.\n", x, y);
//     } else if (x == 0) {
//         printf("The point (%d, %d) is on the Y-axis.\n", x, y);
//     } else if (y == 0) {
//         printf("The point (%d, %d) is on the X-axis.\n", x, y);
//     } else {
//         printf("The point (%d, %d) is neither on the X-axis nor on the Y-axis.\n", x, y);
//     }

//     return 0;
// }

// #include <stdio.h>

    // int year;
    // printf("Enter the year: ");
    // scanf("%d", &year);

    // Number of days from 01/01/01 to 01/01/yy
    // int total_days = 365 * (year - 1) + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    // January 1st of the year is (total_days + 1) days after January 1st of the year 1
    // We can find the day of the week using modulo 7 (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    // int day_of_week = (total_days + 1) % 7;

    // Print the day of the week
//     switch (day_of_week) {
//         case 0:
//             printf("January 1st of %d was a Sunday.\n", year);
//             break;
//         case 1:
//             printf("January 1st of %d was a Monday.\n", year);
//             break;
//         case 2:
//             printf("January 1st of %d was a Tuesday.\n", year);
//             break;
//         case 3:
//             printf("January 1st of %d was a Wednesday.\n", year);
//             break;
//         case 4:
//             printf("January 1st of %d was a Thursday.\n", year);
//             break;
//         case 5:
//             printf("January 1st of %d was a Friday.\n", year);
//             break;
//         case 6:
//             printf("January 1st of %d was a Saturday.\n", year);
//             break;
//     }
//   int i=4,j=-1,k=0,w,x,y,z;
//     w=i||j||k;
//     x=i&&j&&k;
//     y=i||j&&k;
//     z=i&&j||k;

//     printf("w=%d x=%d y=%d z=%d\n",w,x,y,z);
//     int val1,val2,val3;
//     printf("enter sides of TRIANGLE\n");
//     scanf("%d %d %d",&val1,&val2,&val3);
    
//     if((val1==val2)&&(val2==val3)&&(val3==val1))
//     {
//         printf("EQUILATERAL TRIANGLE\n");
//     }
//     else if((val1==val2 && val3!=val1 && val3!=val2)||(val2==val3 && val3!=val1 && val3!=val1)||(val1==val3 && val3!=val2 && val1!=val2)){
//         printf("ISOSCELES TRIANGLE\n");
//     }
//     else if((pow(val1,2)+pow(val2,2)==pow(val3,2))||(pow(val2,2)+pow(val3,2)==pow(val1,2))||(pow(val1,2)+pow(val3,2)==pow(val2,2)))
    
//     {
//         printf("RIGHT ANGLE TRIANGLE\n");
//     }
//     else{
//         printf("SCALENE TRIANGLE\n");
//     }
  
    // char ch;  
  
    // printf("Enter a Character\n");  
    // scanf("%c",&ch);  
  
    // if(ch >= 65 && ch <= 90)  
    // {  
    //     printf("%c is an Uppercase Alphabet\n", ch);  
    // }  
    // else if(ch >= 97 && ch <= 122)  
    // {  
    //     printf("%c is an lowercase Alphabet\n", ch);  
    // }  
    // else if(ch >= 48 && ch <= 57)  
    // {  
    //     printf("%c is a Number\n", ch);  
    // }  
    // else if( (ch >= 0  && ch <= 47) ||  
    //          (ch >= 58 && ch <= 64) ||  
    //          (ch >= 91 && ch <= 96) ||  
    //          (ch >= 123 && ch <= 127))  
    //  {  
    //     printf("%c is a Special Character\n", ch);  
    // }  
  
//     return 0;
// }
#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
  int count=1;
  int choice;
  int i=2;
  int j=0;
  int k=236;
  int range,rem,cubsum,temp;
  int m = 21, p, c;  
  int countpos=0,countneg=0,countzero=0,m1,i_=0,n;
  int temp1,n1,i1=1;
  int remoc,sumoc=0;
  int numsrange,nums;
  int maxval=INT_MIN,minval=INT_MAX,k1=0,k2=0;
  int numsarr[1000],Range;
  printf("enter your choice from 1 to 6\n");
  scanf("%d",&choice);
  switch(choice){
  case 1:
  
  printf("ASCII CHART\n");
    while(j<256){
        printf("%d-->%c\n",j,j);
        j=j+1;
    }
    main();
    break;
    
  case 2:
   
   printf("infinite is:%c \n",k);
   
   printf("enter the last value of range\n");
   scanf("%d",&range);
   printf("the armstrong numbers upto the given range are:\n");
 
       while(i<range){
       temp=i;
       cubsum=0;
       while(temp>0){
           rem=temp%10;
           temp=temp/10;
           cubsum=cubsum+rem*rem*rem;
       }
       if(cubsum==i){
           printf(" %d. %d\n",count,cubsum);
           count++;
       }
       i++;
   }
   main();
   break;
   
   case 3:
 
  
    while(1)  
    {  
        printf("\nNumber of Match sticks left = %d\n", m);  
        printf("Pick 1 or 2 or 3 or 4 matches\n");  
        scanf("%d", &p);  
  
        if(p > 4 || p < 1)  
            continue;  
  
        m = m - p;  
  
        printf("Number of matches left = %d\n", m);  
  
        c = 5 - p;  
  
        printf("out of which computer picked up %d\n", c);  
  
        m = m - c;  
  
        if(m == 1)  
        {  
            printf("\nNumber of matches left = %d\n", m);  
            printf("You lost the Game\n");  
            break;  
        }  
    }  
    main();
    break;
   case 4:
     printf("enter the range\n");
     scanf("%d",&m1);

     while(i_<m1){
       
       printf("enter a num either zero or negative or positive");
       scanf("%d",&n);
      if(n<0){
        countneg++;
      }
      else if(n>0){
        countpos++;
      }
      else{
        countzero++;
      }
      i_++;
     }
     printf("count of positive numbers are:%d\n",countpos);
     printf("count of negative numbers are:%d\n",countneg);
     printf("count of zeros are:%d\n",countzero);
     break;

     case 5:
     
     printf("enter a number in decimal form\n");
     scanf("%d",&n1);
     
     int temp1=n1;
     while(temp1!=0){
      remoc=temp1%8;
      sumoc=sumoc+remoc*i1;
      i1=i1*10;
      temp1=temp1/8;
     }
     printf("octal representation of %d is :%d\n",n1,sumoc);
    break;
       
    case 6:
     printf("enter the range\n");
     scanf("%d",&numsrange);
    
     for(int i2=0;i2<numsrange;i2++){
        printf("enter a number from given range\n");
        scanf("%d",&nums);
        numsarr[i2]=nums;
     }
    
     while(k1<numsrange){
        if(maxval<numsarr[k1]){
            maxval=numsarr[k1];
        }
        k1++;
     }
     while(k2<numsrange){
        if(minval>numsarr[k2]){
            minval=numsarr[k2];
           
        }
         k2++;
     }
     Range=maxval-minval;
     printf(" Rnage is:%d\n",Range);

     
    break;
   default: 
     printf("enter the correct choice\n");
     main();
     break;
  }


 



 
    return 0;
}



