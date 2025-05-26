// Take 10 integer input from user and store then in an
// array and find the sum of all numbers stored in array.
// #include<stdio.h>
// int main()
// {
//     int arr[10];
//     int count=0;
//     int sum=0;
//     printf("Enter the numbers");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int  j= 0; j<10; j++)
//     {
//       count=arr[j];
//       sum=count+sum;

//     }
//     printf("%d",sum);
//     return 0;
// }

// Generating random number using rand  function

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     srand(time(NULL));  // Seed with the current time
//     int random_number = rand();
//     printf("Random number: %d\n", random_number);
//     return 0;
// }

// Store marks obtained by students in an array.
// Find if there is more than one student who scored
// same marks. Assume minimum marks obtained
// is 30 and maximum marks obtained is 85.

// #include<stdio.h>
// int main ()
// {
//     int arr[10];
//     int a=1;
//     int b=0;
//     printf("Enter marks of the students");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int j=0;j<10;j++)
//     {
//         for(int k=0;k<10;k++)
//         {
//             if(arr[j]==arr[k])
//              a=0;
//             else
//             b=1;
//         }
//     }
//     if(a==0)
//     printf("Scored same number");
//     else{
//          printf("all have different numbers");
//     }
//     return 0;
// }

// Find the average mark scored by each
// student?

// #include<stdio.h>
// int main()
// {
//     int arr[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//            printf("arr[%d][%d]",i,j);
//            scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int k=0;k<3;k++)
//     {
//         printf("\n");
//         for(int l=0;l<3;l++)
//         {
//         printf("%d\t",arr[k][l]);
//         }
//     }

//     return 0;
// }

// Counting number of words in a string
// #include<stdio.h>
// #include<string.h>
// int main ()
// {
//     char arr[100];
//     int count=0;
//     printf("Enter your sentence ");
//     fgets(arr,sizeof(arr),stdin);
//     printf("Entered sentence is ");
//     fputs(arr,stdout);
//     for(int i=0;arr[i]!='\0';i++)
//     {
//        if(arr[i]=='\n' || arr[i]=='\t' || arr[i]==' ')
//        {
//         count++;
//        }
//     }
//     printf("%d",count);
//     return 0;
// }

// Example of reading and printing of 1D array

// #include<stdio.h>
// int main()
// {
//     int arr[10];
//     printf("Enter your elements:");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",& arr[i]);
//     }
//     for(int j=0;j<10;j++)
//     {
//         printf("your arr[%d] element is %d \n",j, arr[j]);
//     }
//     return 0;
// }

// opening of the file
//  #include<stdio.h>
//  #include <stdlib.h>
//  int main()
//  {
//      FILE *p;
//      p=fopen("EndsemPractice.txt","r");
//      if(p== NULL)
//      {
//          printf("file cant be opened");
//      }
//      else{
//          printf("file opened successfully");
//      }
//      fclose(p);
//      return 0;
//  }

// Write a C program to create a file and write contents in it.
//  #include<stdio.h>
//  #include<stdlib.h>
//  int main()
//  {
//      char data[200];
//      FILE *ptr;
//      ptr=fopen("EndsemPractice2.txt","w");
//      if(ptr==NULL)
//      {
//          printf("file can not be opened.");
//      }
//      fgets(data,200, stdin);
//      fputs(data,ptr);
//      fclose(ptr);
//      return 0;
//  }

// Write a program in C to write multiple lines to a text file from your keyboard.
//  #include<stdio.h>
//  #include<stdlib.h>
//  int main()
//  {
//      int lines;
//      printf("Enter the number of line to write");
//      scanf("%d",&lines);
//      getchar();
//      char arr[200];
//      FILE *ptr;
//      ptr=fopen("EndsemPractice2.txt","w");
//      if(ptr==NULL)
//      {
//          printf("file can not be opened");
//      }
//      for(int i=0;i<=lines;i++)
//      {
//          fgets(arr,sizeof arr,stdin);
//          fputs(arr,ptr);
//      }
//      return 0;
//  }

// Write a program in C to print the content of a file on the screen and find the
// number of lines in the file.
//  #include<stdio.h>
//  #include<stdlib.h>
//  int main()
//  {
//      int count=1;
//      FILE *ptr;
//      ptr=fopen("EndsemPractice.txt","r");
//      if(ptr==NULL)
//      {
//          printf("Can not open the file");
//      }
//      for(char c=getc(ptr);c!=EOF;c=getc(ptr))
//      {
//          fputc(c,stdout);
//          if(c=='\n')
//          count=count+1;
//      }
//      printf(" Number of lines:%d\t",count);
//      return 0;
//  }

// Writing in a file using fprintf()
//  #include<stdio.h>
//  #include<stdlib.h>
//  int main()
//  {
//      FILE *ptr;
//      ptr=fopen("EndsemPractice.txt","a");
//      if(ptr==NULL)
//      {
//          printf("file can not be opened:");
//      }
//      fprintf(ptr,"new content");
//      fclose(ptr);
//      return 0;
//  }

// Example to copy contents of one file (c1.txt) to the other file (c2.txt)
//  #include<stdio.h>
//  #include<stdlib.h>
//  int main()
//  {
//      FILE *ptr1,*ptr2;
//      ptr1=fopen("EndsemPractice.txt","r");
//      if(ptr1==NULL)
//      {
//          printf("can not open the file.");
//      }
//      ptr2=fopen("EndsemPractice2.txt","w");
//      if(ptr2==NULL)
//      {
//          printf("can not open the file.");
//      }
//      char c=fgetc(ptr1);
//      while(c!=EOF)
//      {
//          fputc(c,ptr2);
//          c=fgetc(ptr1);
//      }
//      fclose(ptr1);
//      fclose(ptr2);
//      ptr2=fopen("EndsemPractice2.txt","r");
//      if(ptr2==NULL)
//      {
//          printf("can not open the file.");
//      }
//      c=fgetc(ptr2);
//      while(c!=EOF)
//      {
//          printf("%c",c);
//          c=fgetc(ptr2);
//      }
//      fclose(ptr2);

//     return 0;
// }

// C program to declare and print local variable inside a
//  function.
//  #include<stdio.h>
//  void function()
//  {
//      int x=10;
//      printf("%d",x);
//  }
//  int main()
//  {
//      function();
//  }

// C program to demonstrate use of global variable
//  #include<stdio.h>
//  int x=20;
//  void function()
//  {
//      printf("%d",x);
//  }
//  int main()
//  {
//      printf("%d\n",x);
//      function();
//  }

// c program to demonstrate use of static variable.
//  #include<stdio.h>
//  void function()
//  {
//      int x=10;
//      static int y=20;
//      x=x+10;
//      y=y+10;
//      printf("local x\n:%d",x);
//      printf("staic y:%d",y);
//  }
//  int main()
//  {
//      function();
//      function();
//      function();
//  }

// Swap of two numbers.
//  #include<stdio.h>
//  #include<stdlib.h>
//  void swap(int *x,int *y)
//  {
//      int temp=*x;
//      *x=*y;
//      *y=temp;
//  }
//  int main()
//  {
//      int a=2;
//      int b=3;
//      swap(&a,&b);
//      printf("%d\n",a);
//      printf("%d",b);
//      return 0;
//  }

// write a program in c to count the number of words and characters in a file
//  #include<stdio.h>
//  #include<stdlib.h>
//  #include<string.h>
//  int main()
//  {
//     FILE * file;
//     char path[100];

//    char ch;
//    int characters, words, lines;
//    printf("Enter source file path: ");
//    scanf("%s", path);
//    file = fopen(path, "r");
//    if (file == NULL)
//    {
//        printf("\nUnable to open file.\n");
//        printf("Please check if file exists and you have read privilege.\n");

//        exit(EXIT_FAILURE);
//    }
//    characters = words = lines = 0;
//    while ((ch = fgetc(file)) != EOF)
//    {
//        characters++;
//        if (ch == '\n' || ch == '\0')
//            lines++;
//        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
//            words++;
//    }
// if (characters > 0)
//    {
//        words++;
//        lines++;
//    }
//    printf("\n");
//    printf("Total characters = %d\n", characters);
//    printf("Total words      = %d\n", words);
//    printf("Total lines      = %d\n", lines);
//    fclose(file);
//    return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// to allocate a memory for 100 integers
// int*ptr=(int* )malloc(100*sizeof(int));
// to allocate a memory for 1000 character
// char*Ptr=(char* )malloc(1000*sizeof(char));
// to allocate a memory for 100 integers
// int*ptr=(int* )Calloc(100*4);
// to allocate a memory for 1000 character
// char*Ntr=(char* )Calloc(1000*sizeof(char));
//     printf("%d",*ptr);
//     return 0;
// }

//  FIBONACCI SERIES
//     0 1 1 2 3 5 8--- */
// #include<stdio.h>
// int main(){
//     int a,b,n,c;
//     printf("Enter the number of terms to be printed");
//     scanf("%d",&n);
//     a=0;
//     b=1;
//     for(int i=0;i<=n;i++){
//          printf("%d\n",a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//   int k=10;
//   while(k<5)
//   {
//     printf("%d",k);
//     k+=2;
//   }
//   return 0;
// }

// BINARY SEARCH.

// #include<stdio.h>
// int main()
// {
//   int fact=1,n;// n holds the number of which factorial to be find.
//   printf("Enter a positive number:");
//   scanf("%d",&n);
//   for (int  i = 1; i <=n; i++)
//   {
//     fact=fact*i;
//   }
//   printf("Factorial of the entered Number is:%d",fact);
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//   while(1)
//   {
//     int choice;
//     printf("Enter 1 to find the factorial.\nEnter 2 to write the fibonacci.\nEnter 3 to Exit.");
//     scanf("%d",&choice);
//     if(choice==1)
//     {
//       int fact=1,n;// n holds the number of which factorial to be find.
//   printf("Enter a positive number:");
//   scanf("%d",&n);
//   for (int  i = 1; i <=n; i++)
//   {
//     fact=fact*i;
//   }
//   printf("Factorial of the entered Number is:%d",fact);
//     }
//     else if (choice==2)
//     {
//       int a=0,b=1,c,n;
//       printf("Enter the number of terms you want to print:");
//       scanf("%d",& n);
//       printf("%d ",a);
//       printf("%d ",b);
//       for(int i=0; i<=n-3;i++)
//       {
//           c=a+b;
//           a=b;
//           b=c;
//           printf(" %d ",c);
//       }
//     }
//    else if (choice==3)
//    {
//     break;
//    }
//   }
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//   while (1)
//   {
//     int choice;
//         printf("press 1 for computing Fibonacci number.\npress 2 to print 
//         the Last Digit of a Large Fibonacci Number.\npress 3 to print the 
//         Last Digit of the Sum of Fibonacci Numbers.\n press 4 to print the factorial 
//         of a given number.\npress 5 to  print the numbers of ways a given word
//         can be scrambled.\n press 6 to Implement Money Change Problem.\npress 7 to exit.");
//         scanf("%d",&choice);
//   if(choice==1)
// {
//   int a=0,b=1,c,n,sum=1,d;
//   printf("Enter the number of terms you want to print:");
//   scanf("%d",& n);
//   printf("%d ",a);
//   printf("%d ",b);
//   for(int i=0; i<=n-3;i++)
//   {
//       c=a+b;
//       a=b;
//       b=c;
//       printf(" %d",c);
//       sum=sum+c;
//   }
//   printf("\n");
//   printf("%d\n", sum);
//   }
// }

//   return 0;
// }
// int romanToInt(char* s) {
//   char I;
//   if(s==I)
//   {
//       int n =(int*)s;
//   }
//   printf("%d",n);
// }
// int main()
// {
//   romanToInt(I)
//   return 0;

// }


// 
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
  // int x=12434;
  // int a=x%10;
  // int num=a;

  // while (x!=0)
  // {
  //   x=x/10;
  //   a=x%10;
  //   num=num*10+a;
  // }
  // printf("%d\n",num/10);
 
  // //printf("%d",num);
  // return 0;

//   int arr[10]={1,2,3,4,5,6,7,8,9,10};
//   int n=10;
//   int target=5;
//   for(int i=0;i<n;i++)
//   {
//     if(arr[i]==target)
//     {
//       printf("Element found at %dth location",i);
//       break;
//     }
//   }
//  // printf("Element not found");
//   return 0;

// }


#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};

int main()
{
  int ptr=struct node *ptr;
  struct node* node1=(struct node*)malloc(sizeof(struct node));
  node1->data=12;
  node1->link=NULL;

  return 0;

}
