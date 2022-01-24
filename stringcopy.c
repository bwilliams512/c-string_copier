/*
This project demonstrates an understanding of the strcpy() function by 
implementing its functionality. It shows how strcpy() works “under the hood.”

In this code, we implement the strcpy() functionality inside the copy() function. 
This is done by using our knowledge about pointers.
*/

#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  // Code for copying a string goes here
  while(*src != '\0') {
    strcpy(dst, src);
    src++;
    dst++;
  }
  *dst = '\0';
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
 int len = strlen(srcString) + 1;
  char dstString[len];

  strcpy(dstString, srcString);
  copy(dstString, srcString);
  printf("%s\n", srcString);
  printf("%s\n", dstString); 
}
