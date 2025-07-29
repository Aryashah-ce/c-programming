#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
  printf("----------\n");
  printf("data types size & it's range\n");
  printf("----------\n");

  //character data type
  printf("character:\n");
  printf("\tsize:%zu bytes\n",sizeof(char));
  printf("\tmin value:%d\n",CHAR_MIN);
  printf("\tmax value:%d\n",CHAR_MAX);
  printf("----------\n");

   //unsigned character datatypes
  printf("unsigned character:\n");
  printf("\tsize:%zu bytes\n",sizeof(unsigned char));
 // printf("\tmin value:%d\n",CHAR_MIN);
  printf("\tmax value:%d\n",UCHAR_MAX);
  printf("----------\n");

 //integer data type
  printf("integer:\n");
  printf("\tsize:%zu bytes\n",sizeof(int));
  printf("\tmin value:%d\n",INT_MIN);
  printf("\tmax value:%d\n",INT_MAX);
  printf("----------\n");


   //unsigned integer
  printf("unsigned int:\n");
  printf("\tsize:%zu bytes\n",sizeof(unsigned int));
 // printf("\tmin value:%d\n",CHAR_MIN);
  printf("\tmax value:%d\n",UINT_MAX);
  printf("----------\n");

 //short data type
  printf("short:\n");
  printf("\tsize:%zu bytes\n",sizeof(short));
  printf("\tmin value:%d\n",SHRT_MIN);
  printf("\tmax value:%d\n",SHRT_MAX);
  printf("----------\n");


   //long data type
  printf("long:\n");
  printf("\tsize:%zu bytes\n",sizeof(long));
  printf("\tmin value:%ld\n",LONG_MIN);
  printf("\tmax value:%ld\n",LONG_MAX);
  printf("----------\n");

    //long long data type
  printf("long long data type:\n");
  printf("\tsize:%zu bytes\n",sizeof(long long));
  printf("\tmin value:%lld\n",LLONG_MIN);
  printf("\tmax value:%lld\n",LLONG_MAX);
  printf("----------\n");

    //float data type
  printf("float:\n");
  printf("\tsize:%zu bytes\n",sizeof(float));
  printf("\tmin value:%.10e\n",FLT_MIN);
  printf("\tmax value:%.10e\n",FLT_MAX);
  printf("precision:%d decimal digites\n",FLT_DIG);
  printf("----------\n");


    //double data type
  printf("double:\n");
  printf("\tsize:%zu bytes\n",sizeof(double));
  printf("\tmin value:%.10e\n",DBL_MIN);
  printf("\tmax value:%.10e\n",DBL_MAX);
  printf("precision:%d decimal digites\n",DBL_DIG);
  printf("----------\n");

     // long double data type
  printf("long double:\n");
  printf("\tsize:%zu bytes\n",sizeof(long double));
  printf("\tmin value:%.10Le\n",LDBL_MIN);
  printf("\tmax value:%.10Le\n",LDBL_MAX);
  printf("precision:%d decimal digites\n",LDBL_DIG);
  printf("----------\n");

  return 0;
}




